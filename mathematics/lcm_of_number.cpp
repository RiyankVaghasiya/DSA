#include <iostream>
using namespace std;

// naive solution

// int lcm(int a, int b)
// {
//     // first we check the max number between both
//     int x = max(a, b);
//     while (x > 0)
//     {
//         if (x % a == 0 && x % b == 0)
//         {
//             break;
//         }
//         else
//         {
//             x++;
//         }
//     }
//     return x;
// }

// Efficient way
// we use formula of eculian algorithm of gcd
// a*b = gcd(a,b) * lcm(a,b)

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    cout << lcm(12, 15);
}
