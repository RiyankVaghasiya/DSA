#include <iostream>
using namespace std;

// this is single level inheritance
// class Animal
// {
// public:
//     int age = 10;
// };

// class Dog : public Animal
// {
// };
// int main()
// {
//     Dog d1;
//     cout << d1.age;
// }

// ########################################################################################

// this is multi-level inheritance
// class A
// {
// public:
//     int age = 18;
// };

// class B : public A
// {
// public:
//     int weight = 80;
// };

// class C : public B
// {
// public:
//     int height = 180;
// };

// int main()
// {
//     // now we can access property of a and b by making object of C
//     C *first = new C;
//     cout << first->height << " ";
//     cout << first->age << " ";
//     cout << first->weight;
// }

// ########################################################################################

// this is multiple inheritance

// class mummy
// {
// public:
//     string bloodgrop = "b-negetive";
// };
// class papa
// {
// public:
//     string skincolor = "white";
// };

// class son : public mummy, public papa
// {
// public:
//     int weight = 80;
// };

// int main()
// {
//     son *first = new son;
//     cout << first->skincolor << " ";
//     cout << first->bloodgrop << " ";
//     cout << first->weight << " ";
// }

// ########################################################################################

// this is hierarchical inheritance
// in this there are two child of one parent

class parent
{
public:
    int age;
    int weight;

    void eat()
    {
        cout << "parent is eating" << endl;
    }
};

class child1 : public parent
{
public:
    int height;
};

class child2 : public parent
{
public:
    string name = "riyank";
};

int main()
{
    child1 *first = new child1;
    first->eat();

    child2 *second = new child2;
    cout << second->name;
}
