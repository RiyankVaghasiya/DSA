#include <iostream>
using namespace std;

// recursive solution

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * fact(n - 1);
}

// using for loop
// int fact(int n)
// {
//     int result = 1;
//     for (int i = 2; i <= n; i++)   // here you can also start i = 1
//     {
//         result = result * i;
//     }
//     return result;
// }

int main()
{
    cout << fact(5);
}
