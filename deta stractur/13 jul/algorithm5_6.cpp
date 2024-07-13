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

void output(Node *head)
{
    Node *x = head;

    while (x != NULL)
    {
        cout << x->val << " ";
        x = x->next;
    }
}
void delete_from_position(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
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
    cout << "before deletation at head: ";
    output(head);

    delete_from_position(head, 3);
    cout << "\nAfter deletation: ";
    output(head);

    return 0;
}
/* Thank you */