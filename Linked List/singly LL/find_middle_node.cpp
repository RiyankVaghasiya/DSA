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

// find middle node
Node *getMiddle(Node *&head)
{
    // when LL is empty
    if (head == NULL)
    {
        cout << "Lindked List is empty";
        return head;
    }

    // when LL has only one node
    if (head->next == NULL)
    {
        return head;
    }

    // for more then one node
    Node *slow = head;
    Node *fast = head;

    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow;
}

int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    // print(first);

    cout << getMiddle(first)->data;
}