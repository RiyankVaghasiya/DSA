#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = 2;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

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

void insertAtposition(int position, Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node();
        head = newNode;
        tail = newNode;
        return;
    }
    if (position == 0)
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

    int i = 1;
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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAthead(head, tail, 10);
    insertAthead(head, tail, 20);
    insertAthead(head, tail, 30);
    insertAthead(head, tail, 40);
    insertAttail(head, tail, 33);
    insertAttail(head, tail, 35);

    insertAtposition(6, head, tail, 101);

    printNode(head);
}
