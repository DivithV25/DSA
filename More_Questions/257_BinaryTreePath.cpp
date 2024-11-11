
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