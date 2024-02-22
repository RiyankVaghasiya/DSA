#include <iostream>
using namespace std;
int printarray(int a[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int transpose(int a[][3], int transposearr[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transposearr[j][i] = a[i][j];
        }
    }
}

int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int transposearr[3][3];

    // print real array
    printarray(a);
    cout << endl;
    // print after transpose
    transpose(a, transposearr);
    printarray(transposearr);
}