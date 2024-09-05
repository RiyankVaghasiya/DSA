#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &arr, int start, int end, int target)
{
    // base case
    if (start > end)
    {
        return -1;
    }

    int mid = start + (end - start) / 2;
    if (arr[mid] == target)
    {
        return mid;
    }

    // now solve one case baki recursion sambhal lega.
    if (arr[mid] > target)
    {
        return binarySearch(arr, start, mid - 1, target);
    }
    else
    {
        return binarySearch(arr, mid + 1, end, target);
    }
}

int main()
{
    vector<int> arr{10, 20, 30, 40, 50, 60, 70, 99};
    int target = 70;
    int start = 0;
    int end = arr.size() - 1;
    int ans = binarySearch(arr, start, end, target);
    cout << ans;
}