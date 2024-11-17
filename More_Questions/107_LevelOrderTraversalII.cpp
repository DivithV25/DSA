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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> answer;
        if (!root)
            return answer;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int qs = q.size();
            vector<int> ans;
            for (int i = 0; i < qs; i++) {
                TreeNode* front = q.front();
                q.pop();
                if (front->left)
                    q.push(front->left);
                if (front->right)
                    q.push(front->right);
                ans.push_back(front->val);
            }
            answer.push_back(ans);
        }
        reverse(answer.begin(), answer.end());
        return answer;
    }
};
