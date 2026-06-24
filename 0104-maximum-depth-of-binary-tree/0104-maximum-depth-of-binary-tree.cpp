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
    int maxDepth(TreeNode* root) {
        int depth = 0;
        function<void(TreeNode*, int)> dfs = [&] (TreeNode *n, int d)
        {
            if (!n)
                return;
            d++;
            if (!n->left & !n->right & d >= depth )
                depth = d;
            dfs(n->right,d);
            dfs(n->left,d);
        };
        dfs(root,0);
        return(depth);
    }
};