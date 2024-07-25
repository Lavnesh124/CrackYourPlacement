#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        unordered_map<int, int> M;
        vector<int> v;
        for (int i = 0; i < nums.size(); i++)
        {
            M[nums[i]]++;
        }
        for (auto x : M)
        {
            if (x.second == 2)
            {
                v.push_back(x.first);
            }
        }
        return v;
    }
};