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
        vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
            if (!root) {
                return {};
            }
            vector<vector<int>> result;
            vector<bool> visited;
            queue<TreeNode*> q;
            result.push_back({root->val});
            bool flag = true;
            q.push(root);
    
            int n = 1;
            while (!q.empty()) {
                vector<int> answer;
                n = q.size();
                while (n--) {
                    TreeNode* node = q.front();
                    q.pop();
                    if (node->left) {
                        q.push(node->left);
                        answer.push_back(node->left->val);
                    }
                    if (node->right) {
                        q.push(node->right);
                        answer.push_back(node->right->val);
                    }
                }
                if (!answer.empty()) {
    
                    if (flag) {
                        reverse(answer.begin(), answer.end());
                        flag = false;
                    } else {
                        flag = true;
                    }
                    result.push_back(answer);
                }
            }
            return result;
        }
    };