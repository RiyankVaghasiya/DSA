#include <iostream>
using namespace std;

// naive solution

int gcd(int a, int b)
{
    int x = min(a, b);
    while (x > 0)
    {
        if (a % x == 0 && b % x == 0)
        {
            break;
        }
        else
        {
            x--;
        }
    }
    return x;
}

// Eucliclean algorithm
// int gcd(int a, int b)
// {
//     if (b == 0)
//     {
//         return a;
//     }
//     else
//     {
//         return gcd(b, a % b);
//     }
// }

int main()
{

    cout << gcd(9, 12);
}