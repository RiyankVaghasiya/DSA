#include <iostream>
using namespace std;

// naive method
// bool prime(int n)
// {
//     if (n == 1)
//     {
//         return false;
//     }
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//         else
//         {
//             return true;
//         }
//     }

//     // time complexity is o(n) because loop runs n-2 times
// }

// more Efficient method
bool prime(int n)
{
    if (n == 1)
    {
        return false;
    }
    if (n == 2 || n == 3)
    {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }
    for (int i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int x;
    cin >> x;
    cout << prime(x);
}