#include <iostream>
#include <vector>
#include <limits.h>
#include <math.h>
using namespace std;

int solve(vector<int> &arr, int target)
{
    if (target == 0)
    {
        return 0;
    }
    if (target < 0)
    {
        return INT_MAX;
    }
    int mini = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        int ans = solve(arr, target - arr[i]);
        if (ans != INT_MAX)
        {
            mini = min(mini, ans + 1);
        }
    }
    return mini;
}

int main()
{
    vector<int> arr{3, 2};
    int target = 5;

    int ans = solve(arr, target);
    cout << "answer is: " << ans << endl;
    return 0;
}