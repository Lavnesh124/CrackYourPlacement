#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        if (strs.size() == 0)
        {
            return "";
        }
        if (strs.size() == 1)
        {
            return strs[0];
        }

        string w = strs[0];
        int mini = INT_MAX;
        string ans = "";
        for (int i = 0; i < strs.size(); i++)
        {
            int k = 0, n1 = w.size();
            int count = 0;
            for (int j = 0; j < strs[i].size();)
            {
                if (count > mini || w[k] != strs[i][j])
                {
                    break;
                }
                else
                {
                    j++;
                    k++;
                    count++;
                }
            }
            mini = min(count, mini);
        }
        for (int i = 0; i < mini; i++)
        {
            ans += strs[0][i];
        }
        return ans;
    }
};