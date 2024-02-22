#include <iostream>
using namespace std;

int dividenumber(int dividend, int divisor)
{
    int ans = 0;
    int s = 0;
    int e = abs(dividend);
    int mid = s + (e - s) / 2;

    // we use basic maths formula for this (divisor + ans + reminder = dividend) --> (bhajak + bhagfal + shesh = bhajy)

    while (s <= e)
    {
        if (abs(mid * divisor) == abs(dividend)) // abs function use to avoid negative value whenever dividend or divisor are negative
        {
            return mid;
        }
        if (abs(mid * divisor) <= abs(dividend))
        {
            ans = mid;
            s = mid + 1;
        }
        if (abs(mid * divisor) > abs(dividend))
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }

    return ans;
}

int main()
{   
    int dividend = -22;
    int divisor = -7;
    int ans = dividenumber(dividend, divisor);
    // now below proccess is to finding the after dot answer
    double step = 0.1;
    int precision = 5;
    double finalans = ans;
    for (int i = 0; i < precision; i++) // this loop counts numbers after dot(.)
    {
        for (double j = finalans; j * abs(divisor) < abs(dividend); j = j + step)
        {
            finalans = j;
        }
        step = step / 10;
    }
    if ((divisor < 0 && dividend < 0) || (divisor > 0 && dividend > 0))
    {
        cout << finalans;
    }
    else
    {
        cout << finalans * -1;
    }
}