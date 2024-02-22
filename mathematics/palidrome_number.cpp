#include <iostream>
using namespace std;
bool palidrome(int n)
{
    int x, rev = 0;
    int temp = n;
    while (temp != 0)
    {

        x = temp % 10;      // to find the last digit of given number
        temp = temp / 10;   // to find modified number after remove last digit
        rev = rev * 10 + x; // to store the reverse number
    }

    return (rev == n);
}

int main()
{
    int result = palidrome(454);
    cout << result;
}