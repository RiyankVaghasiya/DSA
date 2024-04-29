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

// reverse linked list
Node *reverse(Node *&head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *next = curr->next;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

// check for palindrome

bool isPalindrome(Node *&head)
{
    // step1 = find middle of linked list

    // for empty linked list
    if (head == NULL)
    {
        return true;
    }

    // for 1 node linked list
    if (head->next == NULL)
    {
        return true;
    }

    // for >1 node linked list

    Node *slow = head;
    Node *fast = head->next;
    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }

    // step 2 = reverse middle's right side linked list
    Node *reverseLL = reverse(slow->next);

    slow->next = reverseLL;

    // step 3 = compare middle's right and left side linked list
    fast = head;
    slow = slow->next;
    while (slow != NULL)
    {
        if (fast->data == slow->data)
        {
            fast = fast->next;
            slow = slow->next;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(20);
    Node *five = new Node(10);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = five;
    five->next = NULL;

    // print(first);
    bool final = isPalindrome(first);

    if (final)
    {
        cout << "Linked list is palindrome";
    }
    else
    {
        cout << "Linked list is not palindrome";
    }
}