#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {1, 4, 5, 6, 7};

    vector<int> ans;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
            if (a[i] == b[j])
            {
                // mark b[j] = -1 so duplicate elements are not come into answer
                b[j] = -1;
                ans.push_back(a[i]);
            }
        }
    }
    // print vector
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}