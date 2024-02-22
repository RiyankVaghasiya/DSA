#include <iostream>
using namespace std;

int rowsum(int a[][3])
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = sum + a[i][j];
        }
        cout << sum << endl;
    }
}

int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rowsum(a);
}