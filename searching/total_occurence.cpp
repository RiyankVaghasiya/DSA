#include <iostream>
#include <vector>
using namespace std;

int totaloccurence(vector<int> a, int target, int size)
{
    int count = 0;
    int i = 0;
    int s = 0;
    int e = a.size() - 1;
    while (i < e)
    {
        if (a[i] == target)
        {
            count++;
            i++;
        }
        else
        {
            i++;
        }
    }
    return count;
}

int main()
{
    vector<int> a = {1, 3, 3, 3, 4, 4, 4, 4, 4, 6, 7, 9};
    int target = 4;
    int size = 12;
    cout << totaloccurence(a, target, size);
}