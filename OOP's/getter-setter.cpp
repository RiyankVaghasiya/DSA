#include <iostream>
using namespace std;

class Animal
{
private:
    int weight;
    string name;

public:
    int age;

    void eat()
    {
        cout << "eating";
    }

    int getweight()
    {
        return weight;
    }
    void setweight(int w)
    {
        weight = w;
    }
};

int main()
{
    // static memory allocation

    Animal hathi;
    hathi.setweight(50);
    cout << hathi.getweight();

    // dynamic memory allocation

    Animal *lion = new Animal;
    lion->age = 50;

    cout << endl;
    lion->eat();
}