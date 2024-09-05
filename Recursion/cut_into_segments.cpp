#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int solve(int n, int x, int y, int z)
{
    // base case
    if (n == 0)
    {
        return 0;
    }

    if (n < 0)
    {
        return INT_MIN;
    }

    int a = solve(n - x, x, y, z) + 1;
    int b = solve(n - y, x, y, z) + 1;
    int c = solve(n - z, x, y, z) + 1;

    int ans = max(a, max(b, c));

    return ans;
}

int main()
{
    int n = 7;
    int x = 5;
    int y = 5;
    int z = 2;

    int ans = solve(n, x, y, z);

    if (ans < 0)
    {
        ans = 0;
    }

    cout << "answer is: " << ans << endl;
}