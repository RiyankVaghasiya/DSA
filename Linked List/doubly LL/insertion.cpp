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

void insertAthead(Node *&head, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        return;
    }
    Node *newNode = new Node(data);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

// insert at tail

void insertAtTail(Node *&head, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *newNode = new Node(data);
    temp->next = newNode;
    newNode->prev = temp;
    temp = newNode;
    return;
}
// insert at position

void insertAtPosition(Node *&head, int data, int position)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        return;
    }
    int len = length(head);
    if (position > len)
    {
        insertAtTail(head, data);
        return;
    }
    if (position == 1)
    {
        insertAthead(head, data);
        return;
    }
    int i = 2;
    Node *temp = head;
    while (temp->next != NULL)
    {
        if (i == position)
        {
            Node *front = temp->next;
            Node *newNode = new Node(data);
            temp->next = newNode;
            newNode->prev = temp;

            newNode->next = front;
            front->prev = newNode;
            temp = newNode;
            break;
            return;
        }
        i++;
        temp = temp->next;
    }
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

    // insertAthead(first, 101);
    // insertAtTail(first, 36);
    insertAtPosition(first, 25, 4);
    print(first);
}