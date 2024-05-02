#include <iostream>
using namespace std;

class Animal
{
public:
    void speak()
    {
        cout << "speaking";
    }
};

// we can override function and define properties we want if we not override any property then it will print bydefault parent class properties...
class Dog : public Animal
{
public:
    void speak()
    {
        cout << "barking" << endl;
    }
};

class Cow : public Animal
{
public:
    void speak()
    {
        cout << "how..how..how";
    }
};

int main()
{
    // Dog *first = new Dog;
    // first->speak();

    Cow *second = new Cow;
    second->speak();
}