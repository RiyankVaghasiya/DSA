#include <iostream>
#include <limits.h>
using namespace std;

void findMax(int arr[], int n, int i, int &max)
{
    if (i >= n)
    {
        return;
    }
    if (arr[i] > max)
    {
        max = arr[i];
    }
    findMax(arr, n, i + 1, max);
}

int main()
{
    int arr[6] = {10, 20, 5, 14, 17, 66};
    int n = 6;
    int i = 0;
    int max = INT_MIN;
    findMax(arr, n, i, max);
    cout << max;
}