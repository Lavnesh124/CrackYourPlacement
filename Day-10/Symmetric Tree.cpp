class Solution
{
    bool isSym(TreeNode *root1, TreeNode *root2)
    {
        if (!root1 || !root2)
        {
            return root1 == root2;
        }
        if (root1->val != root2->val)
        {
            return false;
        }
        return isSym(root1->left, root2->right) && isSym(root1->right, root2->left);
    }

public:
    bool isSymmetric(TreeNode *root)
    {
        return isSym(root->left, root->right);
    }
};