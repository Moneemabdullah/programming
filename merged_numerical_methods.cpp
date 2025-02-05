
#include <bits/stdc++.h>

using namespace std;

typedef vector<vector<double>> Matrix;
typedef vector<double> Vector;

template <typename Func>
double measureExecutionTime(Func func)
{
    auto start = chrono::high_resolution_clock::now();
    func();
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double, milli> duration = end - start;
    return duration.count();
}

// LinearEquationSolver class
class LinearEquationSolver
{
public:
    LinearEquationSolver(Matrix A, Vector b);
    Vector solve(int method_choice);

private:
    Matrix A;
    Vector b;

    Vector gaussianElimination();
    Vector luDecomposition();
    Vector jacobiMethod(double tolerance = 1e-10, int maxIterations = 1000);
    Vector gaussSeidelMethod(double tolerance = 1e-10, int maxIterations = 1000);
};

LinearEquationSolver::LinearEquationSolver(Matrix A, Vector b) : A(A), b(b) {}

Vector LinearEquationSolver::solve(int method_choice)
{
    Vector x;
    switch (method_choice)
    {
    case 1:
        x = gaussianElimination();
        break;
    case 2:
        x = luDecomposition();
        break;
    case 3:
        x = jacobiMethod();
        break;
    case 4:
        x = gaussSeidelMethod();
        break;
    default:
        throw runtime_error("Invalid method choice");
    }
    return x;
}

Vector LinearEquationSolver::gaussianElimination()
{
    int n = A.size();
    Matrix augmentedMatrix(n, Vector(n + 1));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            augmentedMatrix[i][j] = A[i][j];
        }
        augmentedMatrix[i][n] = b[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int k = i + 1; k < n; k++)
        {
            double factor = augmentedMatrix[k][i] / augmentedMatrix[i][i];
            for (int j = 0; j <= n; j++)
            {
                augmentedMatrix[k][j] -= factor * augmentedMatrix[i][j];
            }
        }
    }
    Vector x(n);
    for (int i = n - 1; i >= 0; i--)
    {
        x[i] = augmentedMatrix[i][n];
        for (int j = i + 1; j < n; j++)
        {
            x[i] -= augmentedMatrix[i][j] * x[j];
        }
        x[i] /= augmentedMatrix[i][i];
    }
    return x;
}

Vector LinearEquationSolver::luDecomposition()
{
    int n = A.size();
    Matrix L(n, Vector(n, 0));
    Matrix U(n, Vector(n, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            U[i][j] = A[i][j];
            for (int k = 0; k < i; k++)
            {
                U[i][j] -= L[i][k] * U[k][j];
            }
        }
        for (int j = i; j < n; j++)
        {
            if (i == j)
                L[i][i] = 1;
            else
            {
                L[j][i] = A[j][i];
                for (int k = 0; k < i; k++)
                {
                    L[j][i] -= L[j][k] * U[k][i];
                }
                L[j][i] /= U[i][i];
            }
        }
    }

    Vector y(n);
    for (int i = 0; i < n; i++)
    {
        y[i] = b[i];
        for (int k = 0; k < i; k++)
        {
            y[i] -= L[i][k] * y[k];
        }
    }

    Vector x(n);
    for (int i = n - 1; i >= 0; i--)
    {
        x[i] = y[i];
        for (int k = i + 1; k < n; k++)
        {
            x[i] -= U[i][k] * x[k];
        }
        x[i] /= U[i][i];
    }
    return x;
}

Vector LinearEquationSolver::jacobiMethod(double tolerance, int maxIterations)
{
    int n = A.size();
    Vector x(n, 0.0);
    Vector xOld(n, 0.0);

    int iteration = 0;
    while (iteration < maxIterations)
    {
        for (int i = 0; i < n; i++)
        {
            double sum = b[i];
            for (int j = 0; j < n; j++)
            {
                if (j != i)
                {
                    sum -= A[i][j] * xOld[j];
                }
            }
            x[i] = sum / A[i][i];
        }
        double error = 0.0;
        for (int i = 0; i < n; i++)
        {
            error += fabs(x[i] - xOld[i]);
        }
        if (error < tolerance)
        {
            break;
        }
        xOld = x;
        iteration++;
    }
    return x;
}

Vector LinearEquationSolver::gaussSeidelMethod(double tolerance, int maxIterations)
{
    int n = A.size();
    Vector x(n, 0.0);

    int iteration = 0;
    while (iteration < maxIterations)
    {
        Vector xOld = x;
        for (int i = 0; i < n; i++)
        {
            double sum = b[i];
            for (int j = 0; j < n; j++)
            {
                if (j != i)
                {
                    sum -= A[i][j] * x[j];
                }
            }
            x[i] = sum / A[i][i];
        }

        double error = 0.0;
        for (int i = 0; i < n; i++)
        {
            double sum = b[i];
            for (int j = 0; j < n; j++)
            {
                if (j != i)
                {
                    sum -= A[i][j] * x[j];
                }
            }
            double new_x = sum / A[i][i];
            error += fabs(new_x - xOld[i]);
            x[i] = new_x;
        }
        if (error < tolerance)
        {
            break;
        }
        iteration++;
    }
    return x;
}

// NonLinearEquationSolver class
class NonLinearEquationSolver
{
public:
    NonLinearEquationSolver(function<double(double)> func, function<double(double)> deriv);
    double solve(int method_choice);

private:
    function<double(double)> f;
    function<double(double)> f_prime;

    double bisectionMethod(double a, double b, double tolerance = 1e-6);
    double newtonRaphsonMethod(double initialGuess, double tolerance = 1e-6);
    double secantMethod(double x0, double x1, double tolerance = 1e-6);
    double fixedPointIteration(double initialGuess, double tolerance = 1e-6);
};

NonLinearEquationSolver::NonLinearEquationSolver(function<double(double)> func, function<double(double)> deriv) : f(func), f_prime(deriv) {}

double NonLinearEquationSolver::solve(int method_choice)
{
    double root = 0.0;

    switch (method_choice)
    {
    case 1:
        double a, b;
        cout << ".......Bisection Method......" << endl;
        cout << "Enter a: ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;
        root = bisectionMethod(a, b);
        cout << "Root using Bisection Method: ";
        break;
    case 2:
        double initialGuess;
        cout << ".......Newton Raphson Method......" << endl;
        cout << "Enter Initial Guess: ";
        cin >> initialGuess;
        root = newtonRaphsonMethod(initialGuess);
        cout << "Root using Newton-Raphson Method: ";
        break;
    case 3:
        double x0, x1;
        cout << ".......Secant Method......" << endl;
        cout << "Enter x1 :";
        cin >> x0;
        cout << "Enter x2: ";
        cin >> x1;
        root = secantMethod(x0, x1);
        cout << "Root using Secant Method: ";
        break;
    case 4:
        cout << ".......Fixed Point Iteration Method......" << endl;
        float guess;
        cout << "Enter Initial Guess: ";
        cin >> guess;
        root = fixedPointIteration(guess);
        cout << "Root using Fixed Point Iteration: ";
        break;
    default:
        cout << "Invalid method choice.\n";
        return 0.0;
    }
    return root;
}

double NonLinearEquationSolver::bisectionMethod(double a, double b, double tolerance)
{
    double c = a;
    if (f(a) * f(b) >= 0)
    {
        cout << "You haven't assumed right a and b. Please Try again.." << endl;
        return 1;
    }
    while ((b - a) >= tolerance)
    {
        c = (a + b) / 2;
        if (f(c) == 0.0)
        {
            break;
        }
        else if (f(c) * f(a) < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }
    }
    return c;
}

double NonLinearEquationSolver::newtonRaphsonMethod(double initialGuess, double tolerance)
{
    double x = initialGuess;
    while (fabs(f(x)) > tolerance)
    {
        if (!f_prime)
        {
            cerr << "Derivative function required for Newton-Raphson method.\n";
            return x;
        }
        double h = f(x) / f_prime(x);
        x = x - h;
    }
    return x;
}

double NonLinearEquationSolver::secantMethod(double x0, double x1, double tolerance)
{
    double x2;
    while (fabs(x1 - x0) > tolerance)
    {
        x2 = x1 - f(x1) * (x1 - x0) / (f(x1) - f(x0));
        x0 = x1;
        x1 = x2;
    }
    return x2;
}

double NonLinearEquationSolver::fixedPointIteration(double initialGuess, double tolerance)
{
    auto g = [this](double x)
    {
        return x - f(x);
    };
    double x = initialGuess;
    while (fabs(f(x)) > tolerance)
    {
        x = g(x);
    }
    return x;
}

// Utils class
class Utils
{
public:
    static Matrix inputMatrix(int n);
    static Vector inputVector(int n);
    static function<double(double)> parseEquation(const string &equation);
    static function<double(double)> parseDerivative(const string &equation);
};

Matrix Utils::inputMatrix(int n)
{
    Matrix mat(n, Vector(n));
    cout << "Enter the matrix elements row by row:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
    return mat;
}

Vector Utils::inputVector(int n)
{
    Vector vec(n);
    cout << "Enter the vector elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    return vec;
}

function<double(double)> Utils::parseEquation(const string &equation)
{
    // Placeholder for parsing logic
    return [](double x)
    { return x * x - 2; }; // Example function: f(x) = x^2 - 2
}

function<double(double)> Utils::parseDerivative(const string &equation)
{
    // Placeholder for parsing logic
    return [](double x)
    { return 2 * x; }; // Example derivative: f'(x) = 2x
}

// Main function
int main()
{
    int choice;
    cout << "Select the type of equation:\n";
    cout << "1. Non-Linear Equation\n";
    cout << "2. Linear Equation\n";
    cin >> choice;

    if (choice == 1)
    {
        string equation;
        cout << "Enter the polynomial equation (e.g., 2x^2 + 3x + 1): " << endl;
        cin.ignore();
        getline(cin, equation);

        try
        {
            auto f = Utils::parseEquation(equation);
            auto f_prime = Utils::parseDerivative(equation);

            NonLinearEquationSolver solver(f, f_prime);

            vector<string> Names = {"Bisection Method", "Newton-Raphson Method", "Secant Method", "Fixed Point Iteration"};

            for (int m_Choice = 1; m_Choice <= Names.size(); ++m_Choice)
            {
                double result;
                double executionTime = measureExecutionTime([&]()
                                                            { result = solver.solve(m_Choice); });

                cout << fixed << setprecision(6);
                cout << "Method: " << Names[m_Choice - 1] << "\n";
                cout << "Root: " << result << "\n";
                cout << "Time taken: " << executionTime << " ms\n\n";
            }
        }
        catch (const exception &e)
        {
            cerr << "An error occurred: " << e.what() << endl;
        }
    }
    else if (choice == 2)
    {
        int n;
        cout << "Enter the size of the matrix (n x n):\n";
        cin >> n;
        Matrix A = Utils::inputMatrix(n);
        Vector b = Utils::inputVector(n);

        LinearEquationSolver solver(A, b);

        vector<string> Names = {"Gaussian Elimination", "LU Decomposition", "Jacobi Method", "Gauss-Seidel Method"};

        for (int m_Choice = 1; m_Choice <= 4; ++m_Choice)
        {
            Vector solution;
            double executionTime = measureExecutionTime([&]()
                                                        { solution = solver.solve(m_Choice); });

            cout << "Method: " << Names[m_Choice - 1] << endl;
            cout << "Solution:" << endl;
            for (size_t i = 0; i < solution.size(); ++i)
            {
                cout << "x[" << i << "] = " << fixed << setprecision(6) << solution[i] << endl;
            }
            cout << "Time taken: " << executionTime << " ms" << endl;
        }
    }
    else
    {
        cout << "Invalid choice.\n";
    }
    return 0;
}