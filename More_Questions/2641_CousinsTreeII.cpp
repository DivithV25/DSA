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
class Solution
{
public:
    TreeNode *replaceValueInTree(TreeNode *root)
    {
        queue<TreeNode *> q;
        q.push(root);
        vector<int> levelSum;
        while (!q.empty())
        {
            int n = q.size();
            int CurrlevelSum = 0;
            while (n--)
            {
                TreeNode *front = q.front();
                q.pop();
                CurrlevelSum += front->val;
                if (front->left)
                {
                    q.push(front->left);
                }
                if (front->right)
                {
                    q.push(front->right);
                }
            }
            levelSum.push_back(CurrlevelSum);
        }
        q.push(root);
        root->val = 0;
        int i = 1;
        while (!q.empty())
        {
            int n = q.size();
            while (n--)
            {
                TreeNode *curr = q.front();
                q.pop();

                int siblingSum = curr->left != NULL ? curr->left->val : 0;
                siblingSum += curr->right != NULL ? curr->right->val : 0;
                if (curr->left)
                {
                    curr->left->val = levelSum[i] - siblingSum;
                    q.push(curr->left);
                }
                if (curr->right)
                {
                    curr->right->val = levelSum[i] - siblingSum;
                    q.push(curr->right);
                }
            }
            i++;
        }

        return root;
    }
};