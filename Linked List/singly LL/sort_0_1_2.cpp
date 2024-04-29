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

// sort 0 1 2
Node *sort(Node *head)
{
    // step 1 create dummy node
    Node *zerohead = new Node(-1);
    Node *zerotail = zerohead;

    Node *onehead = new Node(-1);
    Node *onetail = onehead;

    Node *twohead = new Node(-1);
    Node *twotail = twohead;

    // step 2 travers linked list and add data in dummy node
    Node *curr = head;
    while (curr != NULL)
    {
        if (curr->data == 0)
        {
            // take out the zero vali node
            Node *temp = curr;
            curr = curr->next;
            temp->next = NULL;

            // now append this node to zerohead LL
            zerotail->next = temp;
            zerotail = temp;
        }
        else if (curr->data == 1)
        {
            // take out the one vali node
            Node *temp = curr;
            curr = curr->next;
            temp->next = NULL;

            // now append this node to zerohead LL
            onetail->next = temp;
            onetail = temp;
        }
        else if (curr->data == 2)
        {
            // take out the two vali node
            Node *temp = curr;
            curr = curr->next;
            temp->next = NULL;

            // now append this node to zerohead LL
            twotail->next = temp;
            twotail = temp;
        }
    }

    // step 3 now join linked list and remove dummy node from it
    Node *temp = onehead;
    onehead = onehead->next;
    temp->next = NULL;
    delete temp;

    temp = twohead;
    twohead = twohead->next;
    temp->next = NULL;
    delete temp;

    if (onehead != NULL)
    {
        zerotail->next = onehead;
        if (twohead != NULL)
        {
            onetail->next = twohead;
        }
    }
    else
    {
        // if onehead is empty
        if (twohead != NULL)
        {
            zerotail->next = twohead;
        }
    }
    temp = zerohead;
    zerohead = zerohead->next;
    temp->next = NULL;
    delete temp;
    return zerohead;
}

int main()
{
    Node *first = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(2);
    Node *fourth = new Node(0);
    Node *fifth = new Node(0);
    Node *six = new Node(0);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = six;
    six->next = NULL;

    Node *ans = sort(first);
    print(ans);
}
