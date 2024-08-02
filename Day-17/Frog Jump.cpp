class Solution
{
public:
    bool canCross(vector<int> &stones)
    {
        unordered_map<int, unordered_set<int>> mp;
        mp[1] = {1};
        for (int i = 1; i < stones.size(); i++)
        {
            for (auto jumpsize : mp[stones[i]])
            {
                mp[stones[i] + jumpsize].insert(jumpsize);
                mp[stones[i] + jumpsize + 1].insert(jumpsize + 1);
                mp[stones[i] + jumpsize - 1].insert(jumpsize - 1);
            }
        }
        return mp[stones.back()].size() != 0;
    }
};