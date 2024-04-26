// using kadane's algorithm - leetcode question no 53
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int maxsubarray(vector<int> a)
{
    int sum = 0;
    int maxi = INT_MIN;
    for (int i = 0; i < a.size(); i++)
    {
        sum = sum + a[i];
        if (sum > maxi)
        {
            maxi = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxi;
}

int main()
{
    vector<int> a = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << maxsubarray(a);
}