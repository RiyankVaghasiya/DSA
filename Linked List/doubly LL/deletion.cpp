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

void deleteAthead(Node *&head)
{
    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        delete head;
        return;
    }
    Node *temp = head;
    head = head->next;
    temp->next = NULL;
    head->prev = NULL;
    delete temp;
    return;
}
// delete at tail

void deleteAttail(Node *&head)
{
    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        delete head;
        return;
    }
    Node *temp = head;
    Node *back = NULL;
    while (temp->next != NULL)
    {
        back = temp;
        temp = temp->next;
    }
    back->next = NULL;
    temp->prev = NULL;
    delete temp;
    return;
}
// delete at any position

void deleteAtPosition(Node *&head, int position)
{
    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        delete head;
        return;
    }
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        head->prev = NULL;
        delete temp;
        return;
    }
    int len = length(head);
    if (position == len)
    {
        deleteAttail(head);
    }

    Node *temp = head;
    Node *back = head;
    int i = 1;
    while (temp->next != NULL)
    {
        if (position == i)
        {
            Node *front = temp->next;
            back->next = front;
            temp->prev = NULL;

            front->prev = back;
            temp->next = NULL;
            delete temp;
            return;
        }
        i++;
        back = temp;
        temp = temp->next;
    }
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

    // deleteAthead(first);

    // deleteAttail(first);

    deleteAtPosition(first, 1);
    print(first);
}