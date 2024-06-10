/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
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