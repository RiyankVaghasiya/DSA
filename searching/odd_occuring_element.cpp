#include <iostream>
#include <vector>
using namespace std;
int oddoccuringelement(vector<int> a)
{
    int s = 0;
    int e = a.size() - 1;
    // int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (s == e)
        {
            return a[s];
        }
        if (a[s] == a[s + 1])
        {
            s = s + 2;
        }
        else
        {
            return a[s];
        }
    }
}

int main()
{
    vector<int> a = {1, 1, 2, 2, 1, 3, 3, 2, 2};
    cout << oddoccuringelement(a);
}
