#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

class Solution
{
public:
    void solve(int i, int j, string s, vector<string> &ans, vector<vector<int>> &m, int n)
    {

        if (i == n && j == n)
        {

            ans.push_back(s);

            return;
        }

        m[i][j] = 0;

        int a[] = {1, -1, 0, 0};

        int b[] = {0, 0, 1, -1};

        char c[] = {'D', 'U', 'R', 'L'};

        for (int p = 0; p < 4; p++)
        {

            int l = a[p] + i;

            int r = b[p] + j;

            if (l >= 0 && r >= 0 && l <= n && r <= n && m[l][r])
            {

                solve(l, r, s + c[p], ans, m, n);
            }
        }

        m[i][j] = 1;
    }

    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        vector<string> ans;

        if (m[0][0] == 0)

            return ans;

        solve(0, 0, "", ans, m, n - 1);

        return ans;
    }
};
