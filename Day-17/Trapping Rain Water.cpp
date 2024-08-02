class Solution
{
public:
    int trap(vector<int> &height)
    {
        int n = height.size();
        vector<int> pre(n, 0);
        vector<int> suff(n, 0);
        int prev = 0;
        for (int i = 0; i < n; i++)
        {
            prev = max(prev, height[i]);
            pre[i] = prev;
        }
        int suf = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            suf = max(suf, height[i]);
            suff[i] = suf;
        }

        int sum = 0;
        for (int i = 1; i < n - 1; i++)
        {
            if (min(pre[i - 1], suff[i + 1]) > height[i])
            {
                sum += min(pre[i - 1], suff[i + 1]) - height[i];
            }
        }
        return sum;
    }
};