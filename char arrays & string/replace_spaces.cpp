#include <iostream>
#include <string.h>
using namespace std;

int replacespace(char name[], int n)
{
    int s = 0;
    while (s < n)
    {
        if (name[s] != ' ')
        {
            s++;
        }
        else if (name[s] == ' ')
        {
            name[s] = '@';
        }
    }
}

int main()
{
    char name[100];
    cin.getline(name, 50);
    int n = strlen(name);
    replacespace(name, n);
    cout << name;
}