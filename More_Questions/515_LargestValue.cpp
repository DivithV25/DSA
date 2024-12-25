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
    vector<int> largestValues(TreeNode* root) {
        if (!root) {
            return {};
        }
        queue<TreeNode*> q;
        vector<int> result;
        q.push(root);
        while (!q.empty()) {
            int n = q.size();
            vector<int> answer;
            while (n > 0) {
                auto frontN = q.front();
                q.pop();
                answer.push_back(frontN->val);
                if (frontN->right) {
                    q.push(frontN->right);
                }
                if (frontN->left) {
                    q.push(frontN->left);
                }
                n--;
            }
            int el = *max_element(answer.begin(), answer.end());
            result.push_back(el);
        }
        return result;
    }
};