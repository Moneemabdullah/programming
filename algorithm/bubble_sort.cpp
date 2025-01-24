
/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2025-01-24 18:10:13
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s;
    cout << "Enter the size of array: ";
    cin >> s;
    int ar[s];
    cout << "Entre array elements: ";

    for (int i = 0; i < s; i++)
    {
        cin >> ar[i];
    }

    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < s - 1; j++)
        {
            if (ar[j] > ar[j + 1])
            {
                swap(ar[j], ar[j + 1]);
            }
        }
    }
    cout << "Sorted array elements: ";
    for (int i = 0; i < s; i++)
    {
        cout << ar[i] << " ";
    }

    return 0;
}
/* Thank you */