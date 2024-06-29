/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
*/

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

bool SCARCH(Node *head, int v)
{
    Node *x = head;

    while (x != NULL)
    {
        if (x->val == v)
        {
            return true;
        }

        x = x->next;
    }
    return false;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    if (SCARCH(head, 50))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
/* Thank you */