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

// find length
int findlength(Node *head)
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

// print node
void printNode(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

// delete node
void deleteNode(int position, Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        cout << "linked list is empty";
        return;
    }
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }
    int len = findlength(head);
    if (position == len)
    {
        // find prev
        int i = 1;
        Node *prev = head;
        while (i < position - 1)
        {
            prev = prev->next;
            i++;
        }
        prev->next = NULL;
        Node *temp = tail;
        tail = prev;
        delete temp;
        return;
    }
}

// delete tail of ll
void deletetail(Node *&head, Node *&tail)
{
    if (head == NULL || head->next == NULL)
    {
        cout << "linked list is empty" << endl;
        return;
    }
    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
    return;
}

// delete kth element of node
void deleteFromPosition(Node *&head, Node *&tail, int position)
{
    int len = findlength(head);
    if (head == NULL)
    {
        return;
    }
    if (position > len)
    {
        return;
    }
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node *temp = head;
    int count = 0;
    Node *prev = NULL;
    while (temp != NULL)
    {
        count++;
        if (count == position)
        {
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return;
}

void deleteValue(Node *&head, int value)
{

    Node *prev = NULL;
    Node *temp = head;
    if (head->data == value)
    {
        head = head->next;
        delete temp;
        return;
    }
    while (temp != NULL)
    {
        if (temp->data == value)
        {
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return;
}
int main()
{
    Node *node1 = new Node(10);
    Node *node2 = new Node(20);
    Node *node3 = new Node(30);
    Node *node4 = new Node(40);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;

    // printNode(node1);

    // deletetail(node1, node4);
    // deleteFromPosition(node1, node4, 3);
    deleteValue(node1, 40);
    printNode(node1);
}