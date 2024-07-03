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

    int terget;
    cin >> terget;

    for (int i = 0; i < s; i++)
    {
        if (ar[i] == terget)
        {
            cout << ar[i] << " Found on index " << i << endl;
            return 0;
        }
    }

    cout << terget << " didn't found in the array" << endl;
    return 0;
}
/* Thank you */