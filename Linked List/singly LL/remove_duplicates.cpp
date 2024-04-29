#include <iostream>
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

// print node
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void removeduplicates(Node *&head)
{
    if (head == NULL)
    {
        cout << "Linked List is empty";
        return;
    }
    if (head->next == NULL)
    {
        cout << "single node in LL";
        return;
    }
    Node *curr = head;
    while (curr != NULL)
    {
        if (curr->next != NULL && curr->data == curr->next->data)
        {
            curr->next = curr->next->next;
        }
        else
        {
            curr = curr->next;
        }
    }
}

int main()
{
    Node *first = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(2);
    Node *fourth = new Node(3);
    Node *five = new Node(4);
    Node *six = new Node(4);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = five;
    five->next = six;
    six->next = NULL;

    removeduplicates(first);
    print(first);
}