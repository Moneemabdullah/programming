#include <bits/stdc++.h>
using namespace std;

int main()
{
    string main, pattern;
    cout << "Enter the main string: ";
    getline(cin, main);
    cout << "Enter the pattern: ";
    getline(cin, pattern);
    bool flag = false;
    int k = main.length() - pattern.length();
    int l = 0;
    for (int i = 0; i <= k; i++)
    {
        if (main[i] == pattern[l])
        {
            for (int j = i; j < i + pattern.length(); j++)
            {
                if (main[j] != pattern[l])
                {
                    flag = false;
                    break;
                }
                l++;
            }
            if (l == pattern.length())
            {
                flag = true;
                break;
            }
        }
    }

    if (flag)
        cout << "Pattern matched";
    else
        cout << "Pattern didn't match";

    return 0;
}
