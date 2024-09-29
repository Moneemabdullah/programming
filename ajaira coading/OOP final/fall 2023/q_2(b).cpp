
/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-09-29 15:25:58
*/

#include <bits/stdc++.h>
using namespace std;

class Employee
{
protected:
    double salary;

public:
    virtual void CalculateSalary(double s)
    {
        0;
    };
    virtual double DisplayDetails()
    {
        0;
    };
};

class Manager : public Employee
{
public:
    void CalculateSalary(double s)
    {
        salary = s + (s * 0.05);
    }
    double DisplayDetails()
    {
        return salary;
    }
};

class Engineer : public Employee
{
public:
    void CalculateSalary(double s)
    {
        salary = s + (s * 0.10);
    }
    double DisplayDetails()
    {
        return salary;
    }
};

int main()
{
    char type;
    double salary;

    cout << "Are you a Manager (M) or Engineer (E)? ";
    cin >> type;

    cout << "Enter your salary: ";
    cin >> salary;

    Engineer e;
    Manager m;

    if (type == 'M' || type == 'm')
    {
        m.CalculateSalary(salary);
        m.DisplayDetails();
    }
    else if (type == 'E' || type == 'e')
    {
        e.CalculateSalary(salary);
        e.DisplayDetails();
    }
    else
    {
        cout << "Invalid input." << endl;
        return 1;
    }

    return 0;
}

/* Thank you */