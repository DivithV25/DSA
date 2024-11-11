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
    void findPath(TreeNode* root, vector<string>& answer, string temp) {
        if (!root)
            return;
        if (!root->right && !root->left) {
            temp += to_string(root->val);
            answer.push_back(temp);
        }
        temp += to_string(root->val) + "->";
        findPath(root->left, answer, temp);
        findPath(root->right, answer, temp);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> answer;
        findPath(root, answer, "");
        return answer;
    }
};