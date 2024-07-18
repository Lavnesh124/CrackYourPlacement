

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int subarraysDivByK(vector<int> &nums, int k)
    {
        int n = nums.size();
        int prefsum = 0, ans = 0;
        unordered_map<int, int> prevOct;
        prevOct[0] = 1;

        for (int i = 0; i < n; i++)
        {
            prefsum = (prefsum + nums[i] % k + k) % k;
            ans += prevOct[prefsum];
            prevOct[prefsum]++;
        }
        return ans;
    }
};