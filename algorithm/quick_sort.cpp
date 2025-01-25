
/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2025-01-24 18:10:13
*/

#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{

    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(vector<int> &arr, int low, int high)
{

    if (low < high)
    {

        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    int s;
    cout << "Enter the size of array: ";
    cin >> s;
    vector<int> ar(s);
    cout << "Entre array elements: ";

    for (int i = 0; i < s; i++)
    {
        cin >> ar[i];
    }

    quickSort(ar, 0, s - 1);

    cout << "Sorted array elements: ";
    for (int i = 0; i < s; i++)
    {
        cout << ar[i] << " ";
    }

    return 0;
}
/* Thank you */