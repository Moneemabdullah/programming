/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH

    + - * /
*/

#include <bits/stdc++.h>
using namespace std;

class calculat
{
public:
    int a, b;
    char x;
    void input()
    {
        cin >> a >> b;
        cin >> x;
    }
    void cal()
    {
        switch (x)
        {
        case '+':
            cout << a + b;
            break;
        case '-':
            cout << a - b;
            break;
        case '*':
            cout << a * b;
        case '/':
            cout << a / b;
        }
    }
};

int main()
{
    calculat ob;
    ob.input();
    ob.cal();
    return 0;
}
/* Thank you */