// here normal iterative solution is much batter than recursive solution so always try  first to solve using iterative solution

#include <iostream>
using namespace std;
int digitsum(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    // normal solution

    // int count = 0;
    // while (n != 0)
    // {

    //     int n1 = n % 10;
    //     count = count + n1;
    //     n = n / 10;
    // }
    // return count;

    // recursive solution
    int n1 = n % 10;
    n = n / 10;
    return n1 + digitsum(n);
}

int main()
{
    cout << digitsum(10);
}