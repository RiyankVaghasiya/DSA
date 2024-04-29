#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node()
    {
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

// find length of LL

int length(Node *&head)
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

// print LL
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

// insert at head

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
    head->prev = newNode;
    head = newNode;
}

// insert at tail

void insertAtTail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    Node *newNode = new Node(data);
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}

// insert at position

void insertAtPosition(Node *&head, Node *&tail, int data, int position)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    if (position == 1)
    {
        insertAthead(head, tail, data);
        return;
    }
    int len = length(head);

    if (position >= len)
    {
        insertAtTail(head, tail, data);
        return;
    }

    // to find previos node
    int i = 1;
    Node *prevNode = head; // temp node
    while (i < position - 1)
    {
        prevNode = prevNode->next;
        i++;
    }
    Node *curr = prevNode->next;
    Node *newNode = new Node(data);
    prevNode->next = newNode;
    newNode->prev = prevNode;

    curr->prev = newNode;
    newNode->next = curr;
}
int main()
{

    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);

    first->prev = NULL;
    first->next = second;

    second->prev = first;
    second->next = third;

    third->prev = second;

    insertAthead(first, third, 101);
    insertAtTail(first, third, 33);
    insertAtPosition(first, third, 501, 2);
    print(first);
}