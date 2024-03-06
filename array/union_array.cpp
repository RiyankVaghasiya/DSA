#include <iostream>
#include <vector>
using namespace std;
vector<int> sortedArray(vector<int> a, vector<int> b)
{
    // Write your code here
    int n = a.size();
    int m = b.size();
    int i = 0;
    int j = 0;
    vector<int> unionarr;
    while (i < n && j < m)
    {
        if (a[i] <= b[j])
        {
            if (unionarr.size() == 0 || unionarr.back() != a[i])
            {
                unionarr.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if (unionarr.size() == 0 || unionarr.back() != b[j])
            {
                unionarr.push_back(b[j]);
            }
            j++;
        }
    }

    while (i < n)
    {
        if (unionarr.back() != a[i])
        {
            unionarr.push_back(a[i]);
        }
        i++;
    }
    while (j < m)
    {
        if (unionarr.back() != b[j])
        {
            unionarr.push_back(b[j]);
        }
        j++;
    }
    return unionarr;
}

int main()
{
    vector<int> a = {1, 1, 2, 3, 4, 5};
    vector<int> b = {2, 3, 4, 4, 5, 6};

    vector<int> unionarr = sortedArray(a, b);
    for (int i = 0; i < unionarr.size(); i++)
    {
        cout << unionarr[i];
    }
}