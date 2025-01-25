#include <bits/stdc++.h>
using namespace std;

int a[20][20];
bool vis[20] = {false};
queue<int> q;
int n;

void bfs(int v)
{
    vis[v] = true;
    q.push(v);

    while (!q.empty())
    {
        int current = q.front();
        q.pop();
        for (int i = 0; i < n; i++)
        {
            if (a[current][i] && !vis[i])
            {
                q.push(i);
                vis[i] = true;
            }
        }
    }
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    bfs(0);
    for (int i = 0; i < n; i++)
    {
        if (vis[i])
        {
            cout << i + 1 << ": visited" << endl;
        }
        else
        {
            cout << i + 1 << ": is not visited" << endl;
        }
    }

    return 0;
}
