class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> M;
        for (auto s : strs)
        {
            string o = s;
            sort(s.begin(), s.end());
            M[s].push_back(o);
        }

        for (auto [key, vecofString] : M)
        {
            ans.push_back(vecofString);
        }
        return ans;
    }
};