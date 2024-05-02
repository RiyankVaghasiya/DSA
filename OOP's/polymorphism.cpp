#include <iostream>
using namespace std;

// using function overloading
// calling same function but with different parameters
class Maths
{
public:
    int sum(int a, int b)
    {
        cout << a + b << endl;
    }

    int sum(int a, int b, int c)
    {
        cout << a + b + c << endl;
    }

    int sum(int a, float b)
    {
        cout << a + b << endl;
    }
};

int main()
{
    Maths *obj = new Maths;
    obj->sum(5, 10);
    obj->sum(5, 10, 5);
    obj->sum(5, 5.12f);
}