// https://leetcode.com/problems/sort-colors/submissions/1323670306/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int o = 0, t = 0, z = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                z++;
            }
            else if (nums[i] == 1)
            {
                o++;
            }
            else
            {
                t++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (z != 0)
            {
                nums[i] = 0;
                z--;
            }
            else if (o != 0)
            {
                nums[i] = 1;

                o--;
            }
            else
            {
                nums[i] = 2;
                t--;
            }
        }
        return;
    }
};