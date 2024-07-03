/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s;
    cin >> s;
    int ar[s];
    for (int i = 0; i < s; i++)
    {
        cin >> ar[i];
    }

    int target;
    cin >> target;

    sort(ar, ar + s);

    int l = 0;
    int r = s - 1;

    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (ar[mid] == target)
        {
            cout << target << " found in the array" << endl;
            return 0;
        }
        else if (ar[mid] < target)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << target << " not found in the array" << endl;
    return 0;
}
