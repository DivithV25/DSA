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
        unordered_map<int, int> mp;
        int maxD = 0;
        TreeNode* helper(TreeNode* root) {
            if (root == nullptr || mp[root->val] == maxD) {
                return root;
            }
            TreeNode* left = helper(root->left);
            TreeNode* right = helper(root->right);
            if (left && right) {
                return root;
            }
            return left != nullptr ? left : right;
        }
        void depth(TreeNode* root, int d) {
            if (!root) {
                return;
            }
    
            maxD = max(maxD, d);
            mp[root->val] = d;
            depth(root->left, d + 1);
            depth(root->right, d + 1);
        }
        TreeNode* lcaDeepestLeaves(TreeNode* root) {
            depth(root, 0);
            return helper(root);
        }
    };