#include <iostream>
using namespace std;
void count(int n)
{
    int temp = 0;
    while (n != 0)
    {
        n = n / 10;
        temp++;
    }
    cout << temp;
}

int main()
{
    count(9235);
}