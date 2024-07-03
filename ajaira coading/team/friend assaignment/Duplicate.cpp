#include <bits/stdc++.h>
using namespace std;

bool binary(vector<int> arr, int low, int high, int x)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
            return true;
        else if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;

    vector<int> v(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        if (binary(v, i + 1, n - 1, v[i]))
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}
