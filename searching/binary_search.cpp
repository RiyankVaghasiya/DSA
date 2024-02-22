#include <iostream>
using namespace std;
// time complexity of binary search is O(logn)
int binarysearch(int a[], int target, int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (a[mid] == target)
        {
            return mid;
        }
        else if (target < a[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int a[] = {2, 4, 6, 8, 10, 12, 16};
    int target = 16;
    int size = 7;
    cout << binarysearch(a, target, size);
}