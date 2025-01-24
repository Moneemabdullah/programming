/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2025-01-24 20:18:45
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "N is even. So Magic Square is not possible by N";
        return 0;
    }

    int square[n][n];
    memset(square, 0, sizeof(square));
    int x = 0, y = n / 2;

    for (int i = 1; i <= n * n; i++)
    {
        square[x][y] = i;
        if (i % n == 0)
            x++;
        else
        {
            x--;
            y++;
        }
        x = (x + n) % n;
        y = (y + n) % n;
    }

    cout << "The Magic Square for N:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << square[i][j];
            if (square[i][j] < 10)
                cout << "  ";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
