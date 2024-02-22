#include <iostream>
#include <vector>
using namespace std;

int binarysearch(vector<int> &a, int s, int e, int x)
{
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (a[mid] == x)
        {
            return mid;
        }
        else if (x > a[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
}
int exposearch(vector<int> &a, int x, int n)
{
    if (a[0] == x)
    {
        return 0;
    }
    int i = 1;
    while (i < n && a[i] <= x)
    {
        i = i * 2;
    }
    return binarysearch(a, i / 2, min(i, n - 1), x);
}
int main()
{
    vector<int> a = {3, 4, 5, 6, 11, 13, 14, 15, 56, 70};
    int x = 56;
    int n = a.size();
    cout << exposearch(a, x, n);
}
