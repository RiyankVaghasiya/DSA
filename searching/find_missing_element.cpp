#include <iostream>
#include <vector>
using namespace std;
int findmissingelement(vector<int> a)
{
    int s = 0;
    int e = a.size() - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (a[mid] - 1 == mid)
        {
            // means missing element is not in left so search to right
            s = mid + 1;
        }
        else
        {
            // common sense - if there is not option to find to right side then we have to search it in left side.
            e = mid - 1;
        }
        if (a[mid] - 1 != mid && a[mid - 1] == mid)
        {
            // when mid , s ,e all pointer point on same index that time this condition runs
            return mid + 1;
        }

        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    vector<int> a = {1, 2, 4, 5, 6, 7, 8};
    cout << findmissingelement(a);
}
