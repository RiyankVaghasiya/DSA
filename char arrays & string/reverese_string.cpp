#include <iostream>
#include <string.h>
using namespace std;
// use two pointer approch to solve this question
// time complexity :- O(n/2) = O(n)
// space complexity :- O(1)

int reversestring(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        swap(name[s], name[e]);
        s++;
        e--;
    }
}
int main()
{
    char name[100] = "riyank";
    int n = strlen(name);
    reversestring(name, n);
    cout << name;
}