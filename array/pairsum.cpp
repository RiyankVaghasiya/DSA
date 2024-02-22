#include <iostream>
#include <vector>
using namespace std;

int pairsum(vector<int> a, int keysum)
{
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = i + 1; j < a.size(); j++)
        {
            if (a[i] + a[j] == keysum)
            {
                cout << a[i] << a[j] << endl;
                break;
            }
        }
    }
}

int main()
{
    vector<int> a = {1, 3, 5, 7, 2, 4, 6};
    int keysum = 9;
    pairsum(a, keysum);
}