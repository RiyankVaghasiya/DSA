#include <iostream>
#include <string.h>
using namespace std;
// this is formula for converting lowercase to uppercase we have to just minus lower a and then add upper A
// if we have to convert uppercase to lowercase then we use - A + a
int convertuppercase(char name[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] = name[i] - 'a' + 'A';
        }
    }
}

int main()
{
    char name[100] = "Riyank";
    int n = strlen(name);
    convertuppercase(name, n);
    cout << name;
}