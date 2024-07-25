#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
class Solution
{
public:
    int maxArea(vector<int> height)
    {
        int maxwater = 0, tempwater = 0;
        int i = 0, j = height.size() - 1;

        while (i <= j)
        {
            if (height[i] > height[j])
            {
                tempwater = height[j] * abs(i - j);
                maxwater = max(maxwater, tempwater);
                j--;
            }
            else
            {
                tempwater = height[i] * abs(i - j);
                maxwater = max(maxwater, tempwater);
                i++;
            }
        }
        return maxwater;
    }
};