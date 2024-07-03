#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    cin >> k;

    vector<int> ans;

    for (int i = 0; i <= n; i++)
    {
        if (i == k)
        {
            for (int j = 0; j < m; j++)
            {
                ans.push_back(b[j]);
            }
        }

        ans.push_back(a[i]);
    }

    for (int i = 0; i < ans.size() - 1; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
