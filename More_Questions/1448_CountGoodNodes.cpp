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
        void helper(TreeNode* node, int maxi, int& count) {
            if (!node) {
                return;
            }
            if (maxi <= node->val) {
                count++;
            }
            if (!node->left && !node->right) {
                return;
            }
            helper(node->left, max(maxi, node->val), count);
            helper(node->right, max(maxi, node->val), count);
        }
        int goodNodes(TreeNode* root) {
            int count = 0;
            helper(root, root->val, count);
            return count;
        }
    };