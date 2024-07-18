

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int p = 0;
        int c = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                c++;
            }
        }
        int prev;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
            }
            else
            {
                prev = nums[i];
                nums[p] = prev;
                p++;
            }
        }
        for (int i = n - c; i < n; i++)
        {
            nums[i] = 0;
        }
        return;
    }
};