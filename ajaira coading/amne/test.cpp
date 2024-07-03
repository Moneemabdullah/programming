/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> P(34);

ll LcmOfArray(vector<int> arr, ll idx)
{
    // lcm(a,b) = (a*b/gcd(a,b))
    if (idx == arr.size() - 1)
    {
        return arr[idx];
    }
    ll a = arr[idx];
    ll b = LcmOfArray(arr, idx + 1);
    return (a * b / __gcd(a, b));
}

int main()
{
    P[0] = 0;
    for (int i = 1; i < 34; i++)
    {
        P.push_back(pow(2, i - 1));
    }
    for (auto x : P)
        cout << x << " ";
    return 0;
}
/* Thank you */