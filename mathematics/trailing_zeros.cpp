#include <iostream>
using namespace std;

// for a small value of factorial

// int fact(int n)
// {
//     int res = 1;
//     for (int i = 2; i <= n; i++)
//     {
//         res = res * i;
//     }

//     int count = 0;
//     while (res % 10 == 0)
//     {
//         count++;
//         res = res / 10;
//     }
//     return count;
// }

// for a bigger number of factorial
int fact(int n)
{
    int result = 0;
    for (int i = 5; i <= n; i = i * 5)
    {
        result = result + n / i;
    }
    return result;
}
int main()
{
    cout << fact(251);
}