#include <iostream>
using namespace std;
// int prime(int n) // to check weather number is prime or not
// {
//     if (n == 1)
//     {
//         return false;
//     }
//     if (n == 2 || n == 3)
//     {
//         return true;
//     }
//     if (n % 2 == 0 || n % 3 == 0)
//     {
//         return false;
//     }
//     for (int i = 5; i * i <= n; i = i + 6)
//     {
//         if (n % i == 0 || n % (i + 2) == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }
// // function for prime factor

// int primefactor(int n)
// {
//     for (int i = 2; i < n; i++)
//     {
//         if (prime(i))
//         {
//             int x = i; // here we assign value of i to x because we have to multiply the value in while loop
//             while (n % x == 0)
//             {
//                 cout << i << endl;
//                 x = x * i;
//             }
//         }
//     }
// }

// optimize solution

int primefactor(int n)
{
    if (n == 1)
    {
        return false;
    }
    while (n % 2 == 0)
    {
        cout << 2 << endl;
        n = n / 2;
    }
    while (n % 3 == 0)
    {
        cout << 3 << endl;
        n = n / 3;
    }
    for (int i = 5; i * i <= n; i = i + 6)
    {
        while (n % i == 0)
        {
            cout << i << endl;
            n = n / i;
        }
        while (n % (i + 2) == 0)
        {
            cout << i + 2 << endl;
            n = n / i + 2;
        }
    }
    if (n > 3) // corner case
    {
        cout << n;
    }
}
int main()
{
    primefactor(450);
}