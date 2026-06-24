// basically i learned two new things here maybe three
// auto = keyword to let the compiler figure out the type of something(var, fun, etcc)
// lambda = function written inside another function
// [&] =  see var ouside it's scope (write & read)
// [=] = /////// (copy, read-only )
// [&y] = /////// (can only modify y)
// function<bool(TreeNode*, int)> dfs (type of var)
//= [&](TreeNode* n, int s) -> bool (expression)
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
    bool hasPathSum(TreeNode* root, int targetSum) {
        function<bool(TreeNode*, int)> dfs = [&](TreeNode* n, int s) -> bool
        {
        if (n == NULL)
            return(false);
        s = s + n->val;
        if (n->left == NULL && n->right == NULL && s == targetSum)
            return(true);
        bool a  = dfs(n->left,s);
        bool b  = dfs(n->right,s);
        return(a || b);
        };
        return dfs(root,0); 
    }
};