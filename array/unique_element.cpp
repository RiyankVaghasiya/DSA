#include <iostream>
using namespace std;

int uniquenum(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int arr[9] = {1, 2, 3, 1, 2, 4, 5, 4, 5};
    int size = 9;
    cout << uniquenum(arr, size);
}