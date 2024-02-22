#include <iostream>
#include <vector>
using namespace std;
// int sortarray(vector<int> a)
// {

//     return a;
// }

int main()
{
    vector<int> a = {0, 1, 1, 0, 1, 0, 1, 0, 0};
    int start = 0;
    int end = a.size() - 1;
    int i = 0;

    while (i != end)
    {
        if (a[i] == 0)
        {
            swap(a[start], a[i]);
            start++;
            i++;
        }
        if (a[i] == 1)
        {
            swap(a[i], a[end]);
            end--;
        }
    }
    for (int j = 0; j < a.size(); j++)
    {
        cout << a[j] << " ";
    }
}