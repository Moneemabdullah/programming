#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *createNode(int data)
{
    Node *newNode = new Node(data);
    return newNode;
}

void insertAtEnd(Node **head, Node **tail, int data)
{
    Node *newNode = createNode(data);
    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        (*tail)->next = newNode;
    }
    *tail = newNode;
}

int findIndexOfX(Node *head, int x)
{
    int index = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == x)
        {
            return index;
        }
        temp = temp->next;
        index++;
    }
    return -1;
}

void deleteLinkedList(Node *head)
{
    Node *current = head;
    Node *next;
    while (current != NULL)
    {
        next = current->next;
        delete current;
        current = next;
    }
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        int value;

        while (cin >> value && value != -1)
        {
            insertAtEnd(&head, &tail, value);
        }

        int X;
        cin >> X;

        int result = findIndexOfX(head, X);
        cout << result << endl;

        deleteLinkedList(head);
    }

    return 0;
}
