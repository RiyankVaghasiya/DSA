#include <iostream>
#include <vector>
using namespace std;
// this program return peak element index ---leetcode 852
int peakelement(vector<int> a)
{
    int s = 0;
    int e = a.size() - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (a[mid] < a[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int main()
{
    vector<int> a = {0, 10, 5, 2};
    cout << peakelement(a);
}