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
class Solution {
    public:
        bool helper(TreeNode* node, int targetsum, int CurrSum) {
            if (!node) {
                return false;
            }
            CurrSum += node->val;
            if (!node->left && !node->right) {
                return CurrSum == targetsum;
            }
            return helper(node->left, targetsum, CurrSum) ||
                   helper(node->right, targetsum, CurrSum);
        }
        bool hasPathSum(TreeNode* root, int targetSum) {
            if (!root)
                return false;
            return helper(root, targetSum, 0);
        }
    };