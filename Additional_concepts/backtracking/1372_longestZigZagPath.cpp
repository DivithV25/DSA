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
        int maxLen = 0;
        void helper(TreeNode* node, int Len, bool flag) {
            if (!node) {
                maxLen = max(maxLen, Len);
                return;
            }
            if (flag) {
                helper(node->left, 0, true);
                helper(node->right, Len + 1, false);
            } else {
                helper(node->left, Len + 1, true);
                helper(node->right, 0, false);
            }
        }
        int longestZigZag(TreeNode* root) {
            if (!root) {
                return 0;
            }
            helper(root->left, 0, true);
            helper(root->right, 0, false);
            return maxLen;
        }
    };