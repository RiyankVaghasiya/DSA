#include <iostream>
#include <string>
using namespace std;

int main()
{
    // length function
    string s = "riyank";
    string x = "drashti";

    cout << s.length() << endl;

    // empty function
    cout << s.empty() << endl; // this return 0 if string is not empty

    // push back and pop back function
    s.push_back('a');
    cout << s << endl;

    s.pop_back();

    cout << s << endl;

    // substr function used to take some part of string
    // here 0 shows starting index and 3 shows how many character we have to print
    // this function does not change the real string

    cout << s.substr(0, 3) << endl;

    // compare function
    // this function return 0 if string is same
    // this function is case sensative
    if (s.compare(x) == 0)
    {
        cout << "same" << endl;
    }
    else
    {
        cout << "not same" << endl;
    }

    // find function
    // this function return the index of target
    // it includes space as a index so that's why i is on 6 index
    string sentence = "hello i am riyank";
    string target = "i";

    cout << sentence.find(target) << endl;

    // replace function
    // In this function 0 means starting index and 3 means how many character you have to change
    // this function make change in actual string
    string base = "how are you";
    string y = "where";
    base.replace(4, 3, y);
    cout << base << endl;

    // erase function
    // in this function 9 shows starting index and 4 shows how many character we have to remove

    string i = "what the fuck";
    i.erase(9, 4);
    cout << i;

    // convert string to int
    stoi();
}