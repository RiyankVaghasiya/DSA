#include <iostream>
#include <cmath>
using namespace std;

bool armstrong(int x)
{
    double ans = 0;
    int num = x;
    int k = to_string(x).length();

    while (num > 0)
    {
        int digit = num % 10;
        ans = ans + pow(digit, k);
        num = num / 10;
    }
    return x == ans ? true : false;
}

int main()
{

    int x = 1634;
    int result = armstrong(x);
    cout << result;
}