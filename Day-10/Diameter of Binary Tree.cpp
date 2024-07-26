class Solution
{
public:
    int solve(TreeNode *root, int &dia)
    {
        if (root == NULL)
        {
            return 0;
        }
        int lh = solve(root->left, dia);
        int rh = solve(root->right, dia);
        dia = max(dia, lh + rh + 1);
        return 1 + max(lh, rh);
    }
    int diameterOfBinaryTree(TreeNode *root)
    {
        int diameter = 0;
        solve(root, diameter);
        return diameter - 1;
    }
};