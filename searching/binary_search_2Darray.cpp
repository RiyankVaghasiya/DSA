#include <iostream>
using namespace std;
// c*i+j
int binarysearch(int arr[][4], int r, int c, int target)
{
    int s = 0;
    int e = (r * c) - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        // remember this formula
        int rowindex = mid / c;
        int colindex = mid % c;

        if (arr[rowindex][colindex] == target)
        {
            cout << rowindex << " " << colindex;
        }
        if (arr[rowindex][colindex] > target)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
}

int main()
{
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int target = 9;
    int r = 3, c = 4;

    binarysearch(arr, r, c, target);
}