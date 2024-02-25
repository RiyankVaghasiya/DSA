#include <iostream>
#include <string.h>
using namespace std;

int getlength(char name[])
{
    int i = 0;
    int count = 0;
    while (name[i] != NULL)
    {
        i++;
        count++;
    }
    return count;
}

int main()
{
    // char name[10];
    // cout << "enter your name: ";
    // cin >> name;

    // cout << name;

    // ------ take single input index wise

    // char name[100];
    // cout << "enter the third character: ";
    // cin >> name[2];
    // cout << "enter the 50th character: ";
    // cin >> name[49];

    // cout << name[2];
    // cout << name[49];

    // ------- getline function used

    // cin.getline(name, 100);

    // cout << name << endl;

    //------ find length of string

    char name[10];
    cout << "Enter your name:" << endl;
    cin >> name;
    cout << getlength(name) << endl;

    // strlen is by default function to measure length of string
    cout << strlen(name);
}