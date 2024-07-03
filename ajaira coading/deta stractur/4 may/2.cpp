/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-05-04 22:01:17
*/

#include <iostream>
#include <string>
using namespace std;

void LPS(string t, int lps[])
{
    int m = t.length(), len = 0;
    lps[0] = 0;
    int i = 1;
    while (i < m)
    {
        if (t[i] == t[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len != 0)
            {
                len = lps[len - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}

string remove(string s, string t)
{
    int n = s.length(), m = t.length();
    int lps[m];
    LPS(t, lps);
    int i = 0, j = 0;
    string ans = "";
    while (i < n)
    {
        if (s[i] == t[j])
        {
            i++;
            j++;
            if (j == m)
            {
                j = lps[j - 1];
            }
        }
        else
        {
            if (j != 0)
            {
                j = lps[j - 1];
            }
            else
            {
                ans += s[i];
                i++;
            }
        }
    }
    if (ans.length() == 0)
    {
        return s;
    }
    else
    {
        return ans;
    }
}

int main()
{
    cout << "Enter the main string: ";
    string s;
    getline(cin, s);

    cout << "Enter the pattern to remove: ";
    string t;
    cin >> t;

    string ans = remove(s, t);

    cout << "Resulting string after removal: " << ans << endl;

    return 0;
}
