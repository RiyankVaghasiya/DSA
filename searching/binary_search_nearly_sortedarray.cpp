#include <iostream>
#include <vector>
using namespace std;
// meaning of nearly sorted array is that element you are try to find out is present either in i location or i-1 location or i+1 location in fully sorted array.
int searching(vector<int> arr, int target)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        if (mid - 1 > 0 && arr[mid - 1] == target) // this mid-1 condition is for when mid = 0 that time this condition will not execute
        {
            return mid - 1;
        }
        if (mid + 1 < arr.size() && arr[mid + 1] == target) // this mid+1 is for when mid is on last index this condition stop the bounding of array
        {
            return mid + 1;
        } // this three condition runs when target is on mid or mid-1 or mid+1.

        if (target > arr[mid])
        {
            s = mid + 2;
        }
        else
        {
            e = mid - 2;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    vector<int> arr = {10, 3, 40, 20, 50, 80, 70};
    int target = 10;
    cout << searching(arr, target);
}