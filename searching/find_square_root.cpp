#include <iostream>
#include <vector>
using namespace std;

int findroot(int target)
{
    int s = 0;
    int e = target;
    int mid = s + (e - s) / 2;
    int ans = 0;
    while (s <= e)
    {
        if (mid * mid == target)
        {
            return mid;
        }
        else if (mid * mid > target)
        {
            // means root is present at left side
            e = mid - 1;
        }
        else if (mid * mid < target)
        {
            // means root present in right side but it can be also our answer so that we store this element
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{

    int target = 10;
    int ans = findroot(target);

    // now find floating part of square root
    int precision = 2; // precision means that how many numbers we want after dot(.)
    double finalans = ans;
    double step = 0.1;
    for (int i = 0; i < precision; i++)
    {
        for (double j = finalans; j * j <= target; j = j + step)
        {
            finalans = j;
        }
        step = step / 10;
    }
    cout << finalans;
}