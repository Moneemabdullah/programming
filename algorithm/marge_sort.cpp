
/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2025-01-24 18:48:00
*/

#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int p, int q, int r)
{
    vector<int> L(arr + p, arr + q + 1);
    vector<int> M(arr + q + 1, arr + r + 1);

    merge(L.begin(), L.end(), M.begin(), M.end(), arr + p);
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}
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

    mergeSort(ar, 0, s - 1);

    cout << "Sorted array elements: ";
    for (int i = 0; i < s; i++)
    {
        cout << ar[i] << " ";
    }
    return 0;
}
/* Thank you */