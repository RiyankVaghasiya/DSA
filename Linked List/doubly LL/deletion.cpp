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
        this->data = 1;
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
    int len = 0;
    Node *temp = head;
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

// delete at head

void deleteAthead(Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        cout << "Linked List is empty";
        return;
    }
    Node *temp = head;
    head = head->next;
    head->prev = NULL;
    temp->next = NULL;
    delete temp;
}

// delete at tail

void deleteAttail(Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        cout << "Linked List is empty";
        return;
    }

    Node *temp = tail;
    tail = tail->prev;
    temp->prev = NULL;
    tail->next = NULL;
    delete temp;
    return;
}

// delete at any position

void deleteAtPosition(Node *&head, Node *&tail, int position)
{
    if (head == NULL)
    {
        cout << "Linked List is empty";
        return;
    }

    if (position == 1)
    {
        deleteAthead(head, tail);
        return;
    }
    int len = length(head);

    if (position > len)
    {
        cout << "please enter valid position";
    }

    if (position == len)
    {
        deleteAttail(head, tail);
        return;
    }

    Node *prevNode = head;
    int i = 1;
    while (i < position - 1)
    {
        prevNode = prevNode->next;
        i++;
    }
    Node *temp = prevNode->next;
    Node *curr = temp->next;
    temp->next = NULL;
    curr->prev = prevNode;
    prevNode->next = curr;
}

int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);

    first->prev = NULL;
    first->next = second;

    second->prev = first;
    second->next = third;

    third->prev = second;
    third->next = fourth;

    fourth->prev = third;
    fourth->next = NULL;

    // deleteAthead(first, fourth);

    // deleteAttail(first, fourth);

    deleteAtPosition(first, fourth, 3);
    print(first);
}