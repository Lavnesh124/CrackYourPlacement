#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int solve(int ind, int n, vector<int> &arr, int buy, vector<vector<int>> &V)
    {
        if (ind == n)
        {
            return 0;
        }
        if (V[ind][buy] != -1)
        {
            return V[ind][buy];
        }
        int profit;
        if (buy == 0)
        {
            profit = max(-arr[ind] + solve(ind + 1, n, arr, 1, V), solve(ind + 1, n, arr, 0, V));
        }
        else
        {
            profit = max(arr[ind] + solve(ind + 1, n, arr, 0, V), solve(ind + 1, n, arr, 1, V));
        }
        return V[ind][buy] = profit;
    }
    int maxProfit(vector<int> &prices)
    {
        vector<vector<int>> V(prices.size(), vector<int>(2, -1));
        return solve(0, prices.size(), prices, 0, V);
    }
};