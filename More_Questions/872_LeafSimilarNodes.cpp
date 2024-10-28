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
    void TraverseEnd(vector<int>& result, TreeNode* node) {
        if(!node)
        return;    
            if (!node->right && !node->left) {
            result.push_back(node->val);
            
            }
            TraverseEnd(result, node->left);
            TraverseEnd(result, node->right);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> result1, result2;
        TraverseEnd(result1, root1);
        TraverseEnd(result2, root2);
        return result1 == result2;
    }
};