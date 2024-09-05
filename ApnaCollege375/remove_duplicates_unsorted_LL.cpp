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

// remove duplicates

// void removeDuplicates(Node *head)
// {
//     Node *curr = head;
//     Node *dump;
//     while (curr != NULL)
//     {
//         Node *temp = curr->next;
//         while (temp != NULL)
//         {
//             if (curr->data == temp->data)
//             {
//                 // r = temp->next;
//                 dump = temp;
//                 temp = temp->next;
//                 dump->next = curr->next->next;
//                 delete dump;
//             }
//             else
//             {
//                 temp = temp->next;
//             }
//         }
//         curr = curr->next;
//     }
// }

int main()
{
    Node *first = new Node(12);
    Node *second = new Node(11);
    Node *third = new Node(12);
    Node *fourth = new Node(21);
    Node *five = new Node(41);
    Node *six = new Node(43);
    Node *seven = new Node(21);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = five;
    five->next = six;
    six->next = seven;
    seven->next = NULL;

    removeDuplicates(first);
    print(first);
}