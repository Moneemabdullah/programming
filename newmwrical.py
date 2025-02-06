import numpy as np
import time
from typing import Callable, List, Tuple

def measure_execution_time(func: Callable) -> Tuple[float, any]:
    start = time.time()
    result = func()
    end = time.time()
    return (end - start) * 1000, result  # Convert to milliseconds

class LinearEquationSolver:
    def __init__(self, A: np.ndarray, b: np.ndarray):
        self.A = A
        self.b = b

    def solve(self, method_choice: int) -> np.ndarray:
        if method_choice == 1:
            return self.gaussian_elimination()
        elif method_choice == 2:
            return self.lu_decomposition()
        elif method_choice == 3:
            return self.jacobi_method()
        elif method_choice == 4:
            return self.gauss_seidel_method()
        else:
            raise ValueError("Invalid method choice")

    def gaussian_elimination(self) -> np.ndarray:
        n = len(self.A)
        augmented_matrix = np.hstack((self.A, self.b.reshape(-1, 1)))

        for i in range(n):
            for k in range(i + 1, n):
                factor = augmented_matrix[k, i] / augmented_matrix[i, i]
                augmented_matrix[k, i:] -= factor * augmented_matrix[i, i:]

        x = np.zeros(n)
        for i in range(n - 1, -1, -1):
            x[i] = augmented_matrix[i, n]
            for j in range(i + 1, n):
                x[i] -= augmented_matrix[i, j] * x[j]
            x[i] /= augmented_matrix[i, i]
        return x

    def lu_decomposition(self) -> np.ndarray:
        n = len(self.A)
        L = np.zeros((n, n))
        U = np.zeros((n, n))

        for i in range(n):
            for j in range(i, n):
                U[i, j] = self.A[i, j]
                for k in range(i):
                    U[i, j] -= L[i, k] * U[k, j]

            for j in range(i, n):
                if i == j:
                    L[i, i] = 1
                else:
                    L[j, i] = self.A[j, i]
                    for k in range(i):
                        L[j, i] -= L[j, k] * U[k, i]
                    L[j, i] /= U[i, i]

        y = np.zeros(n)
        for i in range(n):
            y[i] = self.b[i]
            for k in range(i):
                y[i] -= L[i, k] * y[k]

        x = np.zeros(n)
        for i in range(n - 1, -1, -1):
            x[i] = y[i]
            for k in range(i + 1, n):
                x[i] -= U[i, k] * x[k]
            x[i] /= U[i, i]
        return x

    def jacobi_method(self, tolerance: float = 1e-10, max_iterations: int = 1000) -> np.ndarray:
        n = len(self.A)
        x = np.zeros(n)
        x_old = np.zeros(n)

        iteration = 0
        while iteration < max_iterations:
            for i in range(n):
                sum_ = self.b[i]
                for j in range(n):
                    if j != i:
                        sum_ -= self.A[i, j] * x_old[j]
                x[i] = sum_ / self.A[i, i]

            error = np.sum(np.abs(x - x_old))
            if error < tolerance:
                break
            x_old = x.copy()
            iteration += 1
        return x

    def gauss_seidel_method(self, tolerance: float = 1e-10, max_iterations: int = 1000) -> np.ndarray:
        n = len(self.A)
        x = np.zeros(n)

        iteration = 0
        while iteration < max_iterations:
            x_old = x.copy()
            for i in range(n):
                sum_ = self.b[i]
                for j in range(n):
                    if j != i:
                        sum_ -= self.A[i, j] * x[j]
                x[i] = sum_ / self.A[i, i]

            error = np.sum(np.abs(x - x_old))
            if error < tolerance:
                break
            iteration += 1
        return x

class NonLinearEquationSolver:
    def __init__(self, func: Callable[[float], float], deriv: Callable[[float], float]):
        self.f = func
        self.f_prime = deriv

    def solve(self, method_choice: int) -> float:
        if method_choice == 1:
            print(".......Bisection Method......")
            a = float(input("Enter a: "))
            b = float(input("Enter b: "))
            return self.bisection_method(a, b)
        elif method_choice == 2:
            print(".......Newton Raphson Method......")
            initial_guess = float(input("Enter Initial Guess: "))
            return self.newton_raphson_method(initial_guess)
        elif method_choice == 3:
            print(".......Secant Method......")
            x0 = float(input("Enter x1: "))
            x1 = float(input("Enter x2: "))
            return self.secant_method(x0, x1)
        elif method_choice == 4:
            print(".......Fixed Point Iteration Method......")
            initial_guess = float(input("Enter Initial Guess: "))
            return self.fixed_point_iteration(initial_guess)
        else:
            print("Invalid method choice.")
            return 0.0

    def bisection_method(self, a: float, b: float, tolerance: float = 1e-6) -> float:
        if self.f(a) * self.f(b) >= 0:
            print("You haven't assumed right a and b. Please Try again..")
            return 1.0
        c = a
        while (b - a) >= tolerance:
            c = (a + b) / 2
            if self.f(c) == 0.0:
                break
            elif self.f(c) * self.f(a) < 0:
                b = c
            else:
                a = c
        return c

    def newton_raphson_method(self, initial_guess: float, tolerance: float = 1e-6) -> float:
        x = initial_guess
        while abs(self.f(x)) > tolerance:
            if not self.f_prime:
                print("Derivative function required for Newton-Raphson method.")
                return x
            h = self.f(x) / self.f_prime(x)
            x = x - h
        return x

    def secant_method(self, x0: float, x1: float, tolerance: float = 1e-6) -> float:
        while abs(x1 - x0) > tolerance:
            x2 = x1 - self.f(x1) * (x1 - x0) / (self.f(x1) - self.f(x0))
            x0 = x1
            x1 = x2
        return x2

    def fixed_point_iteration(self, initial_guess: float, tolerance: float = 1e-6) -> float:
        def g(x: float) -> float:
            return x - self.f(x)
        x = initial_guess
        while abs(self.f(x)) > tolerance:
            x = g(x)
        return x

class Utils:
    @staticmethod
    def input_matrix(n: int) -> np.ndarray:
        print("Enter the matrix elements row by row:")
        mat = np.zeros((n, n))
        for i in range(n):
            for j in range(n):
                mat[i, j] = float(input(f"Enter element [{i}][{j}]: "))
        return mat

    @staticmethod
    def input_vector(n: int) -> np.ndarray:
        print("Enter the vector elements:")
        vec = np.zeros(n)
        for i in range(n):
            vec[i] = float(input(f"Enter element [{i}]: "))
        return vec

    @staticmethod
    def parse_equation(equation: str) -> Callable[[float], float]:
        # Placeholder for parsing logic
        return lambda x: x**2 - 2  # Example function: f(x) = x^2 - 2

    @staticmethod
    def parse_derivative(equation: str) -> Callable[[float], float]:
        # Placeholder for parsing logic
        return lambda x: 2 * x  # Example derivative: f'(x) = 2x

def main():
    choice = int(input("Select the type of equation:\n1. Non-Linear Equation\n2. Linear Equation\n"))
    if choice == 1:
        equation = input("Enter the polynomial equation (e.g., 2x^2 + 3x + 1): ")
        f = Utils.parse_equation(equation)
        f_prime = Utils.parse_derivative(equation)
        solver = NonLinearEquationSolver(f, f_prime)

        methods = ["Bisection Method", "Newton-Raphson Method", "Secant Method", "Fixed Point Iteration"]
        for i, method in enumerate(methods, start=1):
            execution_time, result = measure_execution_time(lambda: solver.solve(i))
            print(f"Method: {method}")
            print(f"Root: {result:.6f}")
            print(f"Time taken: {execution_time:.6f} ms\n")
    elif choice == 2:
        n = int(input("Enter the size of the matrix (n x n): "))
        A = Utils.input_matrix(n)
        b = Utils.input_vector(n)
        solver = LinearEquationSolver(A, b)

        methods = ["Gaussian Elimination", "LU Decomposition", "Jacobi Method", "Gauss-Seidel Method"]
        for i, method in enumerate(methods, start=1):
            execution_time, solution = measure_execution_time(lambda: solver.solve(i))
            print(f"Method: {method}")
            print("Solution:")
            for j, val in enumerate(solution):
                print(f"x[{j}] = {val:.6f}")
            print(f"Time taken: {execution_time:.6f} ms\n")
    else:
        print("Invalid choice.")

if __name__ == "__main__":
    main()