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

// length of LL
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

// reverse k group
Node *reverse(Node *&head, int k)
{
    if (head == NULL)
    {
        cout << "Linked List is empty";
    }
    if (head->next == NULL)
    {
        return head;
    }
    int len = length(head);
    if (k > len)
    {
        // cout << "Enter valid value of k";
        return head;
    }
    Node *prev = NULL;
    Node *curr = head;
    Node *forward = curr->next;
    int count = 0;
    while (count < k)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }
    if (forward != NULL)
    {
        head->next = reverse(forward, k);
    }
    return prev;
}

int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);
    Node *six = new Node(60);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = six;
    six->next = NULL;

    first = reverse(first, 4);
    print(first);
}
