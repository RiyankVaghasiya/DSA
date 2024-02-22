#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a = {-1, 2, -3, 4, -1, -5, 6};
    int i = 0;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a.size(); j++)
        {
            if (a[j] > a[i])
            {
                swap(a[j], a[i]);
            }
        }
    }
    for (int j = 0; j < a.size(); j++)
    {
        cout << a[j] << " ";
    }
}