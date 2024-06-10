/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH

    q==

    write c++ code to find that two integer numbers a and b are equal, or greater or smaller and also 
    print the values accordingly 
*/

#include <bits/stdc++.h>
using namespace std;

class NUM
{
    int a, b;

public:
    void input()
    {
        cin >> a >> b;
    }
    void com()
    {
        if (a == b)
        {
            cout << "same";
        }
        else if (a > b)
        {
            cout << a << " is big";
        }
        else
        {
            cout << b << " is big";
        }
    }
};
int main()
{
    NUM ob;
    ob.input();
    ob.com();
    return 0;
}
/* Thank you */
