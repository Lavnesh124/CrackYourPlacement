class Solution
{
public:
    void solve(vector<vector<int>> &ans, vector<int> &v, int n, int &k, int i)
    {
        if (i > n)
        {
            return;
        }
        if (k == 0)
        {
            ans.push_back(v);
            return;
        }
        v.push_back(i + 1);
        k -= 1;
        solve(ans, v, n, k, i + 1);
        v.pop_back();
        k += 1;
        solve(ans, v, n, k, i + 1);
        return;
    }
    vector<vector<int>> combine(int n, int k)
    {
        vector<vector<int>> ans;
        vector<int> v;
        solve(ans, v, n, k, 0);
        return ans;
    }
};