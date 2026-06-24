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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool status  = 0;
        if (!p && !q)
                return (true);
        function<void(TreeNode* ,TreeNode* )> dfs   = [&](TreeNode* n,TreeNode* n2)
        {
             
            if (!(!n) && !(!n2) && (n->val == n2->val))
                {
                    status = 1;
                    dfs(n->left,n2->left);
                    if (status)
                        dfs(n->right,n2->right);
                }
            else if ( !n2 && n)
                status = 0;
            else if ( !n && n2)
                status = 0;
            if (!(!n) && !(!n2) && (n->val != n2->val))
                status = 0;
        };
        dfs(p,q);
        return (status);
    }
};