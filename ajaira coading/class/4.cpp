/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-27 22:04:26

    1+(1+2)+(1+2+3) = 10

*/

#include <bits/stdc++.h>
using namespace std;
class Asci
{
public:
    int n;
    void input()
    {
        cin >> n;
    }
    void calculate()
    {

        int sum = 0;
        for (int i = 1; i < n; i++)
        {
            int s = 0;
            for (int j = 1; j <= i; j++)
            {
                s += j;
            }
            sum += s;
        }
        cout << sum;
    }
};

int main()
{
    Asci obj;
    obj.input();
    obj.calculate();

    return 0;
}