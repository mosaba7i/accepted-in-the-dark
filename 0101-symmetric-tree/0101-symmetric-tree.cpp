/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        int status = 1;
         if(!root)
            return(true);
       function<void(TreeNode*,TreeNode*)> dfs = [&](TreeNode* n,TreeNode* n2)
        {
            if (!n && !n2)
                return;

            if (!n || !n2)
            {
                status = 0;
                return;
            }
            if (n->val != n2->val)
            {
                status = 0;
                return;
            }
         
            dfs(n->left,n2->right);
            if (status)
                dfs(n->right,n2->left);
        
        
        };
        dfs(root->right,root->left);
        return (status);
    }
};