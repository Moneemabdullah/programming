
/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2025-01-24 18:23:10
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

    for (int i = 1; i < s; ++i)
    {
        int key = ar[i];
        int j = i - 1;

        while (j >= 0 && ar[j] > key)
        {
            ar[j + 1] = ar[j];
            j = j - 1;
        }
        ar[j + 1] = key;
    }

    cout << "Sorted array elements: ";
    for (int i = 0; i < s; i++)
    {
        cout << ar[i] << " ";
    }

    return 0;
}
/* Thank you */