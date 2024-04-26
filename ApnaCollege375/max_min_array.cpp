#include <iostream>
#include <limits.h>
using namespace std;

int getmin(int A[], int N)
{
    int ans = INT_MAX;

    for (int i = 0; i < N; i++)
    {
        if (A[i] < ans)
        {
            ans = A[i];
        }
    }
    return ans;
}
int getmax(int A[], int N)
{
    int ans2 = INT_MIN;

    for (int i = 0; i < N; i++)
    {
        if (A[i] > ans2)
        {
            ans2 = A[i];
        }
    }
    return ans2;
}

int main()
{
    int A[] = {0, -1, 2, 6, -4};
    int N = 5;
    int min = getmin(A, N);
    int max = getmax(A, N);
    int sum = min + max;
    cout << sum;
}
