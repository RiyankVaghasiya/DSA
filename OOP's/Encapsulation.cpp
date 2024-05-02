#include <iostream>
using namespace std;

class Person
{
private:
    int age;
    int weight;

public:
    void eat()
    {

        cout << "person is eating right now";
    }
    int getter()
    {
        return age;
    }
    void setter(int age)
    {
        this->age = age;
    }

    int getterweight()
    {
        return weight;
    }
    void setterweight(int w)
    {
        this->weight = w;
    }
};

int main()
{
    Person *first = new Person();
    first->setter(18);
    cout << first->getter() << endl;

    first->setter(85);
    cout << first->getter();
}