

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        vector<int> prev(n, 0);
        prev[0] = prices[0];
        int maxi = 0;
        for (int i = 1; i < n; i++)
        {
            prev[i] = min(prev[i - 1], prices[i]);
            maxi = max(maxi, prices[i] - prev[i]);
        }
        return maxi;
    }
};