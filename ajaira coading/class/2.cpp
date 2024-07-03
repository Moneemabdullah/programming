/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-27 21:47:13
*/

#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
    if (n > 1)
    {
        return false;
    }
    for (int i = 0; i * i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    int ans;
    for (int i = 0; i < n; i++)
    {
        if (is_prime(i))
        {
            ans = i;
        }
    }
    cout << ans;
    return 0;
}