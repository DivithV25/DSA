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
    bool validate(TreeNode* root1, TreeNode* root2) {
        if (!root1 && !root2)                                  // While recursion if both node end together then everything is right till now
            return true;
        if (!root1 || !root2 || root1->val != root2->val)      //if any onenode end and other has value then they cant be equal (for recursion even if both node has different value then return false indicating that they are not equal)
            return false;
        return ((validate(root1->left, root2->left) ||         //check left,left then left,right if even one is correct then one child equal    
                 validate(root1->left, root2->right)) &&
                (validate(root1->right, root2->right) ||
                 validate(root1->right, root2->left)));
    }
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        return validate(root1, root2);
    }
};