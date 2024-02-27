// leetcode question no. 539
#include <iostream>
#include <vector>
#include <string>
#include <limits.h>  // for int max
#include <algorithm> // for sort() function
using namespace std;

int findMinDifference(vector<string> timepoints)
{
    // step 1 convert string minutes into int values
    vector<int> minutes;
    for (int i = 0; i < timepoints.size(); i++)
    {
        string points = timepoints[i];
        int hour = stoi(points.substr(0, 2));
        int min = stoi(points.substr(3, 2));
        int totalminutes = hour * 60 + min;
        minutes.push_back(totalminutes);
    }

    // step 2 sort minutes array
    sort(minutes.begin(), minutes.end());

    // step 3 find diff and then find minimum diff
    int mini = INT_MAX;
    for (int i = 0; i < minutes.size() - 1; i++)
    {
        int diff = minutes[i + 1] - minutes[i];
        mini = min(mini, diff);
    }

    // step 4 if there are 11:59 and 12:00 in array then diff should be 1 but it will show 1440 this is edge case.
    int lastdiff = (minutes[0] + 1440) - minutes[minutes.size() - 1];
    mini = min(mini, lastdiff);
    return mini;
}

int main()
{
    vector<string> timepoints = {"00:00", "23:59", "00:00"};
    cout << findMinDifference(timepoints);
}