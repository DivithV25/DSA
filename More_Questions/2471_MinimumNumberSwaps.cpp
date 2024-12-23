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
    int countMinSwap(vector<int>& vec) {
        int swaps = 0;
        vector<int> sortedVec(vec.begin(), vec.end());

        sort(sortedVec.begin(), sortedVec.end());

        unordered_map<int, int> mp;
        for (int i = 0; i < vec.size(); i++) {
            mp[vec[i]] = i;
        }

        for (int i = 0; i < vec.size(); i++) {
            if (vec[i] == sortedVec[i]) {
                continue;
            }
            int currIdx = mp[sortedVec[i]];
            mp[vec[i]] = currIdx;
            swap(vec[currIdx], vec[i]);
            swaps++;
        }
        return swaps;
    }
    int minimumOperations(TreeNode* root) {
        queue<TreeNode*> que;
        que.push(root);
        int result = 0;
        while (!que.empty()) {
            int n = que.size();
            vector<int> vec;
            while (n--) {
                TreeNode* temp = que.front();
                que.pop();
                vec.push_back(temp->val);
                if (temp->left) {
                    que.push(temp->left);
                }
                if (temp->right) {
                    que.push(temp->right);
                }
            }
            result += countMinSwap(vec);
        }
        return result;
    }
};