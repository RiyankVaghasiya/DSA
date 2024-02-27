// leetcode question no 1047
#include <iostream>
#include <string>
using namespace std;

string removeduplicate(string s)
{
    int i = 0;
    string ans = "";
    while (i < s.length())
    {
        if (ans.length() > 0)
        {
            if (ans[ans.length() - 1] == s[i])
            {
                ans.pop_back();
            }
            else
            {
                ans.push_back(s[i]);
            }
        }
        else
        {
            ans.push_back(s[i]);
        }
        i++;
    }
    return ans;
}

int main()
{
    string s = "abbaca";
    cout << removeduplicate(s);
}