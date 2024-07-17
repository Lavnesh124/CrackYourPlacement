// https://leetcode.com/problems/find-the-duplicate-number/submissions/1323605591/

// code

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int findDuplicate(vector<int> &nums)
  {
    int n = nums.size();

    // brute force
    /* sort(nums.begin(),nums.end());
       for(int i=0;i<n;i++){
         if(nums[i]==nums[i+1]){
          return nums[i];
        }
      }
     return -1;
    */

    // by using map
    /* unordered_map<int,int> M;
     for(int i=0;i<n;i++){
      M[nums[i]]++;
     }
     for(auto x:M){
      if(x.second>1){
          return x.first;
      }
     }
     return -1;
     */

    // using binary search
    int slow = nums[0];
    int fast = nums[0];
    do
    {
      slow = nums[slow];
      fast = nums[nums[fast]];
    } while (slow != fast);

    fast = nums[0];
    while (slow != fast)
    {
      slow = nums[slow];
      fast = nums[fast];
    }
    return fast;
  }
};
