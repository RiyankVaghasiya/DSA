// leetcode question no. 1910
#include <iostream>
#include <string>
using namespace std;

string removeoccurence(string s, string part)
{

    int index = s.find(part);

    while (index != string::npos)
    {
        s.erase(index, part.length());
        index = s.find(part);
    }

    return s;
}

int main()
{
    string s = "daabcbaabcbc";
    string part = "abc";
    cout << removeoccurence(s, part);
}