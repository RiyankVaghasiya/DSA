// leetcode question no.205
#include <iostream>
#include <string>
using namespace std;
bool isIsomorphic(string s, string t)
{
    int hash[256] = {0};
    bool itscharsmapped[256] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        if (hash[s[i]] == 0 && itscharsmapped[t[i]] == 0)
        {
            hash[s[i]] = t[i];
            itscharsmapped[t[i]] = true;
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (char(hash[s[i]]) != t[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s = "egg";
    string t = "add";
    cout << isIsomorphic(s, t);
}