#include <iostream>
using namespace std;

int climbStairs(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    int ans = climbStairs(n - 1) + climbStairs(n - 2);
    return ans;
}

int main()
{
    int n = 3;

    int ans = climbStairs(n);
    cout << "Answer is: " << ans << endl;
}