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
    bool isCousins(TreeNode* root, int x, int y) {
        queue<pair<TreeNode*, pair<TreeNode*, int>>> q;
        q.push({root, {nullptr, 0}}); //{node,{parent,depth}}
        TreeNode* x_parent = nullptr;
        TreeNode* y_parent = nullptr;
        int x_dept = -1;
        int y_dept = -1;
        while (!q.empty()) {
            TreeNode* front = q.front().first;
            TreeNode* parent = q.front().second.first;
            int depth = q.front().second.second;
            q.pop();

            if (front->val == x) {
                x_parent = parent;
                x_dept = depth;
            }

            if (front->val == y) {
                y_parent = parent;
                y_dept = depth;
            }

            if (x_parent && y_parent) {
                break;
            }
            if (front->left) {
                q.push({front->left, {front, depth + 1}});
            }
            if (front->right) {
                q.push({front->right, {front, depth + 1}});
            }
        }

        return (x_dept == y_dept) && (x_parent != y_parent);
    }
};