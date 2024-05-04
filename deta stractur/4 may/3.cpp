/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-05-04 22:20:46
*/

#include <bits/stdc++.h>
using namespace std;

bool compare(string str, string pattern)
{
    if (str.compare(pattern) == 0)
        return true;
    return false;
}

void replacePattern(string &str, string pattern, string replacement)
{
    if (pattern.empty())
        return;

    int len = pattern.length();
    if (len == 0)
        return;

    int i = 0, j = 0;
    int count;

    while (str[j])
    {
        count = 0;

        while (compare(str.substr(j, len), pattern))
        {
            j = j + len;
            count++;
        }

        if (count > 0)
        {
            for (int k = 0; k < replacement.length(); k++)
                str[i++] = replacement[k];
        }

        if (str[j])
            str[i++] = str[j++];
    }

    str.resize(i);
}

int main()
{
    string str, pattern, replacement;

    cout << "Enter the main string: ";
    getline(cin, str);

    cout << "Enter the pattern to search for: ";
    getline(cin, pattern);

    cout << "Enter the pattern to replace with: ";
    getline(cin, replacement);

    replacePattern(str, pattern, replacement);

    cout << "The Resulting string: " << str;

    return 0;
}

