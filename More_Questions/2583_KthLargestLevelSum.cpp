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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        priority_queue<long, vector<long>, greater<long>> pq;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int n = q.size();
            long long sum = 0;
            while (n--) {
                TreeNode* frontNode = q.front();
                q.pop();
                sum += frontNode->val;
                if (frontNode->left != nullptr) {
                    q.push(frontNode->left);
                }
                if (frontNode->right != nullptr) {
                    q.push(frontNode->right);
                }
            }
            pq.push(sum);
        }
        while (pq.size() > k) {
            pq.pop();
        }
        return pq.size() < k ? -1 : pq.top();
    }
};