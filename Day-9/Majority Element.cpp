#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> M;
        int n = nums.size();
        for (auto x : nums)
        {
            M[x]++;
        }
        for (auto x : M)
        {
            if (x.second > n / 2)
            {
                return x.first;
            }
        }
        return -1;
    }
};