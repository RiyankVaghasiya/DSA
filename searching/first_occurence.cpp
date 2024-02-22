#include <iostream>
#include <vector>
using namespace std;

int firstoccurence(vector<int> a, int target, int size)
{
    int s = 0;
    int e = a.size() - 1;
    int mid = s + (e - s) / 2;
    int ans;
    while (s <= e)
    {
        if (a[mid] == target)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (target > a[mid])
        {
            s = mid + 1;
        }
        else if (target < a[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
}

int main()
{
    vector<int> a = {1, 3, 3, 3, 4, 4, 4, 4, 4, 6, 7, 9};
    int target = 4;
    int size = 12;
    cout << firstoccurence(a, target, size);
}