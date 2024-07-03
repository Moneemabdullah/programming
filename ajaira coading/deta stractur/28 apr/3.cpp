/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-26 22:43:27
*/

#include <bits/stdc++.h>
using namespace std;
int ar[100];
int main()
{
    int a;
    cin >> a;

    for (int i = 0; i < a; i++)
    {
        cin >> ar[i];
    }
    int pos, val;
    cin >> pos >> val;

    int tmp = ar[++pos];
    ar[pos] = val;

    for (int i = pos + 1; i < a + 1; i++)
    {
        ar[i] = tmp;
        tmp = ar[i + 1];
        ar[i + 1] = ar[i];
    }

    for (int i = 0; i <= a; i++)
    {
        cout << ar[i] << " ";
    }

    return 0;
}