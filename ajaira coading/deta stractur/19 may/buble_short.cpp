/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-05-18 19:24:23
*/

#include <bits/stdc++.h>
using namespace std;

#define cY cout << "YES" << endl
#define cN cout << "NO" << endl

int main()
{
    int s;
    cout << "Enter array size: ";
    cin >> s;
    cout << "Enter the array elements: ";
    vector<int> ar(s);

    for (int i = 0; i < s; i++)
    {
        cin >> ar[i];
    }

    bool swapped;
    for (int i = 0; i < s - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < s - i - 1; j++)
        {
            if (ar[j] > ar[j + 1])
            {
                swap(ar[j], ar[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }

    cout << "The shorted array is: ";
    for (int i = 0; i < s; i++)
    {
        cout << ar[i] << " ";
    }

    return 0;
}