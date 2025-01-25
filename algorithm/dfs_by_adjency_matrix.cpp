/*
    Abdullah al moneem
*/

#include <bits/stdc++.h>
using namespace std;
const int MAX = 10;
int graph[MAX][MAX];
bool visited[MAX];

void DFS(int start, int n)
{
    for (int i = 0; i < n; ++i)
    {
        visited[i] = false;
    }

    stack<int> s;
    s.push(start);

    while (!s.empty())
    {
        int node = s.top();
        s.pop();

        if (!visited[node])
        {
            visited[node] = true;
            cout << node << " ";
        }

        for (int i = 0; i < n; ++i)
        {
            if (graph[node][i] == 1 && !visited[i])
            {
                s.push(i);
            }
        }
    }
}

int main()
{
    int n;
    cout << "Enter the number of Vertices: ";
    cin >> n;

    cout << "\nEnter the adjacency matrix of the graph: \n";
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> graph[i][j];
        }
    }

    DFS(0, n);
    return 0;
}
