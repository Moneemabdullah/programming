
/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-09-29 15:44:30
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    // Dynamically allocate memory for n student GPAs
    double *gpa = new double[n];

    for (int i = 0; i < n; ++i)
    {
        cout << "Enter GPA for student " << i + 1 << ": ";
        cin >> gpa[i];
    }
    cout << "\nGPAs of students:\n";
    for (int i = 0; i < n; ++i)
    {
        cout << "Student " << i + 1 << ": " << gpa[i] << endl;
    }

    // Free the allocated memory
    delete[] gpa;

    return 0;
}

/* Thank you */