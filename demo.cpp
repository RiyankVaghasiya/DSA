// leetcode question 532
#include <iostream>
#include <vector>
using namespace std;

void findpair(vector<int> &nums)
{

    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
}

int main()
{
    vector<int> nums;
    findpair(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i];
    }
}