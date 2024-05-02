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

// reverse number
Node *reverse(Node *&head)
{
    Node *curr = head;
    Node *prev = NULL;
    Node *forward = curr->next;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

// add two numbers
Node *solve(Node *&head1, Node *&head2)
{
    // step 1 reverse both linked list
    Node *reversehead1 = reverse(head1);
    Node *reversehead2 = reverse(head2);

    // step 2 add both linked list
    Node *anshead = NULL;
    Node *ansTail = NULL;
    int carry = 0;

    while (reversehead1 != NULL && reversehead2 != NULL)
    {
        int sum = carry + reversehead1->data + reversehead2->data;
        int digit = sum % 10;
        carry = sum / 10;

        Node *newNode = new Node(digit);
        if (anshead == NULL)
        {
            anshead = newNode;
            ansTail = newNode;
        }
        else
        {
            ansTail->next = newNode;
            ansTail = newNode;
        }
        reversehead1 = reversehead1->next;
        reversehead2 = reversehead2->next;
    }
    while (reversehead1 != NULL)
    {
        int sum = carry + reversehead1->data;
        int digit = sum % 10;
        carry = sum / 10;
        Node *newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail = newNode;
        reversehead1 = reversehead1->next;
    }
    while (reversehead2 != NULL)
    {
        int sum = carry + reversehead2->data;
        int digit = sum % 10;
        carry = sum / 10;
        Node *newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail = newNode;
        reversehead2 = reversehead2->next;
    }

    while (carry != 0)
    {
        int sum = carry;
        int digit = sum % 10;
        carry = sum / 10;
        Node *newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail = newNode;
    }
    anshead = reverse(anshead);
    return anshead;
}

int main()
{
    Node *head1 = new Node(9);
    Node *second1 = new Node(9);
    head1->next = second1;

    Node *head2 = new Node(9);
    Node *second2 = new Node(9);
    Node *third2 = new Node(9);
    head2->next = second2;
    second2->next = third2;

    Node *ans = solve(head1, head2);

    print(ans);
}