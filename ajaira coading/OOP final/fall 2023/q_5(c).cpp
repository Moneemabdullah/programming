
/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-09-29 16:01:51
*/

#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    string name;
    int ID;

public:
    // Constructor
    Student(string n, int i) : name(n), ID(i)
    {
        cout << "Student object created for " << name << " with ID: " << ID << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "Farewell! Student object for " << name << " with ID: " << ID << " is destroyed." << endl;
    }

    void displayDetails()
    {
        cout << "Name: " << name << ", ID: " << ID << endl;
    }
};

int main()
{
    Student s1("Alice", 101);

    s1.displayDetails();

    return 0;
}

/* Thank you */