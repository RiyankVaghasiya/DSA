#include <iostream>
using namespace std;
int fun(int n)
{
    if (n == 0)
    {
        return 0;
    }
    cout << n;
    fun(n - 1);
}

int main()
{
    fun(5);
}