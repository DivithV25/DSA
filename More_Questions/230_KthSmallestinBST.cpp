/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution
{
public:
    vector<int> number;
    void Traversal(TreeNode *root)
    {
        if (!root)
            return;
        Traversal(root->left);
        number.push_back(root->val);
        Traversal(root->right);
    }
    int kthSmallest(TreeNode *root, int k)
    {
        Traversal(root);
        sort(number.begin(), number.end());
        return number[k - 1];
    }
};