
/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-09-29 15:56:27
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    try
    {
        int a, b;
        cout << "Enter two integers" << endl;
        cout << "Enter a: ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;

        if (a == 0)
        {
            throw 0;
        }

        if (b == 0)
        {
            throw string("Division by zero is not allowed.");
        }

        cout << "The division of " << a << " by " << b << " is " << a / b << endl;
    }

    catch (int e)
    {
        cout << "Error: 'a' cannot be 0." << endl;
    }
    catch (string &e)
    {
        cout << "Error: " << e << endl;
    }
    catch (...)
    {
        cout << "An unknown error occurred." << endl;
    }

    return 0;
}
