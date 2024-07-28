class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int cummul = 1;
        int maxi = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            cummul = cummul * nums[i];
            maxi = max(cummul, maxi);
            if (cummul == 0)
            {
                cummul = 1;
            }
        }
        cummul = 1;
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            cummul = cummul * nums[i];
            maxi = max(cummul, maxi);
            if (cummul == 0)
            {
                cummul = 1;
            }
        }

        return maxi;
    }
};