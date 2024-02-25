#include <iostream>
#include <string.h>
using namespace std;

bool palindrome(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= n)
    {
        if (s >= e)
        {
            return true;
        }
        if (name[s] == name[e])
        {
            s++;
            e--;
        }
        else
        {
            return false;
        }
    }
}
int main()
{
    char name[100] = "abba";
    int n = strlen(name);
    cout << palindrome(name, n);
}