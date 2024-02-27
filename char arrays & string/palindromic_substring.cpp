#include <iostream>
#include <string>
using namespace std;

int expandaroundindex(string s, int i, int j)
{
    int count = 0;
    while (i >= 0 && s[i] == s[j] && j < s.length())
    {
        count++;
        i--;
        j++;
    }
    return count;
}

int main()
{
    string s = "aaa";
    int count = 0;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        // for odd index
        int oddkacount = expandaroundindex(s, i, i);
        count = count + oddkacount;

        // for even index
        int evenkacount = expandaroundindex(s, i, i + 1);
        count = count + evenkacount;
    }
    cout << count;
}