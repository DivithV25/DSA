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
    void helper(TreeNode* node, int targetSum, vector<vector<int>> &answer, vector<int> &result, int CurrSum) {
        if (!node) return;
    
        CurrSum += node->val;
        result.push_back(node->val);
    
        if (!node->left && !node->right) {  
            if (CurrSum == targetSum) {
                answer.push_back(result);
            }
        } else {
            helper(node->left, targetSum, answer, result, CurrSum);  
            helper(node->right, targetSum, answer, result, CurrSum); 
        }
    
        result.pop_back();  
    }
        vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
            vector<vector<int>> answer;
            vector<int> result;
            helper(root, targetSum, answer, result, 0);
            return answer;
        }
    };