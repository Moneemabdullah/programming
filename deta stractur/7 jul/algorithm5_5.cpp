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
    cout << endl;
}
void insert_at_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i < pos && tmp != nullptr; i++)
    {
        tmp = tmp->next;
    }
    if (tmp == nullptr)
    {
        cout << "Position " << pos << " is out of bounds." << endl;
        return;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << "Inserted at position " << pos << endl;
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
    cout << "before insetrtation: ";
    output(head);

    insert_at_position(head, 3, 100);
    cout << "After insertation: ";
    output(head);

    return 0;
}
/* Thank you */