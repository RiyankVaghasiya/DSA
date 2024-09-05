#include <iostream>
using namespace std;

bool isSorted(int arr[], int length, int i)
{
    if (i == length - 1)
    {
        return true;
    }
    if (arr[i] > arr[i + 1])
    {
        return false;
    }
    return isSorted(arr, length, i + 1);
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int length = 5;
    int i = 0;
    cout << isSorted(arr, length, i);
}