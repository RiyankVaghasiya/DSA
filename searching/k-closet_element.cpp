// leetcode question 658.
// two pointer approch.
#include <iostream>
#include <vector>
using namespace std;

int closeelement(vector<int> &a, int k, int x, vector<int> &ans)
{
    int s = 0;
    int e = a.size() - 1;
    while (e - s >= k)
    {
        if (abs(x - a[s]) > abs(x - a[e]))
        {
            s++;
        }
        else
        {
            e--;
        }
    }
    // vector<int> ans;
    for (int i = s; i <= e; i++)
    {
        ans.push_back(a[i]);
    }
}

int main()
{
    vector<int> a = {12, 16, 22, 30, 35, 39, 42, 45, 48, 50, 53, 55, 56};
    int k = 4;
    int x = 35;
    vector<int> ans;
    closeelement(a, k, x, ans);
    for (int i = 0; i <= ans.size() - 1; i++)
    {
        cout << ans[i] << " ";
    }
}
