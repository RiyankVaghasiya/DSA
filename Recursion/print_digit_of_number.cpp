#include <iostream>
#include <vector>
using namespace std;

void printDigit(int n)
{

    if (n == 0)
    {
        return;
    }

    int digit = n % 10;

    printDigit(n / 10);
    cout << digit << " ";
}

int main()
{
    int n = 647;
    printDigit(n);
}