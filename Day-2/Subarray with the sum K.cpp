// https://leetcode.com/problems/subarray-sum-equals-k/submissions/1324679052/

// code

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        int n = nums.size();
        int cnt = 0;
        // brute force
        /*      for(int i=0;i<n;i++){
                    int s=0;
                    for(int j=i;j<n;j++){
                        s+=nums[j];
                         if(s==k){
                        cnt++;
                      }
                    }

                }
                return cnt;
                */

        // optimal approach in O(n)
        unordered_map<int, int> map;

        int sum = 0, result = 0;
        map[sum] = 1;

        for (int n : nums)
        {
            sum += n;
            result += map[sum - k];
            map[sum]++;
        }

        return result;
    }
};