
/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2025-01-24 21:41:25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> q;

    while (true)
    {
        cout << "1. Insert\n2. Delete\n3. Display\n4. Exit\n";
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            if (q.size() == 4)
            {
                cout << "overflow";
            }
            else
            {
                int val;
                cout << "enter value: ";
                cin >> val;
                q.push(val);
            }
        }
        else if (choice == 2)
        {
            if (q.size() == 0)
            {
                cout << "Overflow";
            }
            else
            {
                q.pop();
            }
        }
        else if (choice == 3)
        {
            while (!q.empty())
            {
                cout << q.top();
                q.pop();
            }
        }

        else
        {
            cout << "input error";
        }
    }

    return 0;
}
/* Thank you */