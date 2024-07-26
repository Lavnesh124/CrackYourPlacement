class Solution
{
public:
    void solve(TreeNode *root, int low, int high, int &sum)
    {
        if (!root)
        {
            return;
        }
        int s;
        if (root->val >= low && root->val <= high)
        {
            sum += root->val;
        }
        solve(root->left, low, high, sum);
        solve(root->right, low, high, sum);
        return;
    }
    int rangeSumBST(TreeNode *root, int low, int high)
    {
        int sum = 0;
        solve(root, low, high, sum);
        return sum;
    }
};