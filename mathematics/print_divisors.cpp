#include <iostream>
#include <math.h>
using namespace std;

// solution 1

// void divisor(int x)
// {
//     int num = x;
//     for (int i = 1; i <= x; i++)
//     {
//         if (num % i == 0)
//         {
//             cout << i << endl;
//         }
//     }
// }

// solution 2

void divisor(int x)
{
    int num = x;
    for (int i = 1; i <= sqrt(x); i++)
    {
        if (num % i == 0)
        {
            cout << i << endl;
            if ((num / i) != i)
            {
                cout << (num / i) << endl;
            }
        }
    }
}

int main()
{
    int x = 36;
    divisor(x);
}