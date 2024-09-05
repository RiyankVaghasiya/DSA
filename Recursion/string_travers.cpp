#include <iostream>
#include <string.h>
using namespace std;

bool stringTravers(string str, int length, char key, int i)
{
    if (i >= length)
    {
        return false;
    }
    if (str[i] == key)
    {
        return true;
    }
    return stringTravers(str, length, key, i + 1);
}

int main()
{
    string str = "Riyank";
    int length = str.length();
    int i = 0;
    char key = 'R';
    bool ans = stringTravers(str, length, key, i);
    cout << ans;
}