// leetcode question no. 680
#include <iostream>
#include <string>
using namespace std;

bool validpalindrome(string s)
{
    int start = 0;
    int end = s.length() - 1;

    while (start <= end)
    {
        if (s[start] != s[end])
        {
            return checkPalindrome(s, start + 1, end) || checkPalindrome(s, start, end - 1);
        }
        else
        {
            start++;
            end--;
        }
    }
    return true;
}
bool checkPalindrome(string s, int start, int end)
{

    if (s[start] != s[end])
    {
        return false;
    }
    else
    {
        start++;
        end--;
    }
    return true;
}

int main()
{
    string s = "abc";
    validPalindrome(s);
}