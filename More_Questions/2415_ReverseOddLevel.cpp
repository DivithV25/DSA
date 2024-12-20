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
    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        bool flag = false;
        while (!q.empty()) {
            int size = q.size();
            vector<TreeNode*> v;
            for (int i = 0; i < size; i++) {
                if (q.front() == NULL) {
                    q.pop();
                    continue;
                }
                v.push_back(q.front());
                q.push(q.front()->left);
                q.push(q.front()->right);
                q.pop();
            }
            if (flag) {
                int left = 0, right = v.size() - 1;
                while (left <= right) {
                    swap(v[left++]->val, v[right--]->val);
                }
            }
            flag = (!flag);
        }
        return root;
    }
};