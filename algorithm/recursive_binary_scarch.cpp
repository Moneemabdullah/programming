
/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2025-01-24 21:49:42
*/

#include <bits/stdc++.h>
using namespace std;

int scarch(vector<int> arr, int l, int r, int ter)
{
    int mid = (l + r) / 2;

    if (arr[mid] == ter)
        return mid;
    if (l >= r)
        return -1;

    if (ter > arr[mid])
        scarch(arr, mid + 1, r, ter);
    else
        scarch(arr, l, mid - 1, ter);
}

int main()
{

    int s;
    cout << "Enter the size of Array: ";
    cin >> s;
    vector<int> v(s);
    cout << "Enter the elements :";
    for (int i = 0; i < s; i++)
    {
        cin >> v[i];
    }
    int ter;
    cout << "Enter the terget element you want to scarch: ";
    cin >> ter;
    int result = scarch(v, 0, s - 1, ter);

    if (result == -1)
    {
        cout << ter << " is not found on this array!";
    }
    else
    {
        cout << ter << " is found in this array. at index: " << ter;
    }

    return 0;
}

/* Thank you */