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

// check for loop
bool checkforloop(Node *&head)
{
    if (head == NULL)
    {
        cout << "Linked List is empty";
        return false;
    }
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {

            fast = fast->next;
            slow = slow->next;
        }
        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}

// find starting point of loop
Node *startingPoint(Node *&head)
{
    if (head == NULL)
    {
        cout << "Linked List is empty";
        return NULL;
    }
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        if (slow == fast)
        {
            slow = head;
            break;
        }
    }
    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }
    return fast;
}

int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);
    Node *six = new Node(60);
    Node *seven = new Node(70);
    Node *eight = new Node(80);
    Node *nine = new Node(90);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = six;
    six->next = seven;
    seven->next = eight;
    eight->next = nine;
    nine->next = fifth;

    // cout << checkforloop(first);

    cout << startingPoint(first)->data;
}
