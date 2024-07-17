// https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/1324168308/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        for (int i = 0; i < (nums.size() - 1);)
        {
            if (nums[i] == nums[i + 1])
            {
                nums.erase(nums.begin() + (i + 1));
            }
            else
            {
                i++;
            }
        }
        return (nums.size());
    }
};