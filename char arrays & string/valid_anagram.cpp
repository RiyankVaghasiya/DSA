// leetcode question no. 242
#include <iostream>
#include <string>
using namespace std;

bool isAnagram(string s, string t)
{
    int freqtable[256] = {0};

    // check for length first
    if (s.length() != t.length())
    {
        return false;
    }
    // add value to freqtable
    for (int i = 0; i < s.size(); i++)
    {
        freqtable[s[i]]++;
    }
    // now remove value from freqtable

    for (int j = 0; j < t.size(); j++)
    {
        freqtable[t[j]]--;
    }

    // now check our table if number is anagram then there are >1 value
    // available in table
    for (int i = 0; i < 256; i++)
    {
        if (freqtable[i] != 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s = "anagram";
    string t = "nagaram";
    cout << isAnagram(s, t);
}