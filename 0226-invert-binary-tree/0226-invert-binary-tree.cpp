// helyeaaaaaaahhhhhhhhhh i'm on a freaking streakkkk i can't belive that solved like 3 problems in less than an hour while being stuck for more than 3 hoursssss on one problem lesgooooooooo :>>>>>> <333
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
    TreeNode* invertTree(TreeNode* root) {
        function<void(TreeNode*)> dfs = [&](TreeNode* n)
        {
            if (!n)
                return;
            if (n->right || n->left)
            {
                   TreeNode *tmp = n->right;
                   n->right = n->left;
                   n->left = tmp;
                   dfs(n->right);
                   dfs(n->left);
            }

        };
        dfs(root);
        return(root);
    }
};