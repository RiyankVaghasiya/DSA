#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = 1;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// find length
int findlength(Node *head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

// print node
void printNode(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

// insert node at head
void insertAthead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    Node *newNode = new Node(data);

    newNode->next = head;
    head = newNode;
}

// insert node at tail
void insertAttail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    Node *newNode = new Node(data);

    tail->next = newNode;

    tail = newNode;
}

// insert at any position
void insertAtposition(int position, Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node();
        head = newNode;
        tail = newNode;
        return;
    }
    if (position == 1)
    {
        insertAthead(head, tail, data);
        return;
    }
    int len = findlength(head);
    if (position >= len)
    {
        insertAttail(head, tail, data);
        return;
    }

    int i = 2;
    Node *prev = head;
    while (i < position)
    {
        prev = prev->next;
        i++;
    }

    Node *curr = prev->next;

    Node *newNode = new Node(data);

    newNode->next = curr;

    prev->next = newNode;
}

// insert the value before the value x
void insertAtValue(Node *&head, int x)
{
    if (head == NULL)
    {
        return;
    }
    if (head->data == x)
    {
        Node *newNode = new Node(0);
        newNode->next = head;
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->next->data == x)
        {
            Node *newNode = new Node(0);
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return;
}
int main()
{
    // Node *head = NULL;
    // Node *tail = NULL;

    // insertAthead(head, tail, 10);
    // insertAthead(head, tail, 20);
    // insertAthead(head, tail, 30);
    // insertAthead(head, tail, 40);
    // insertAttail(head, tail, 33);
    // insertAttail(head, tail, 35);

    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);

    first->next = second;
    second->next = third;
    third->next = NULL;

    // insertAtposition(2, first, third, 101);
    insertAtValue(first, 10);

    printNode(first);
}
