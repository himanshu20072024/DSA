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
    int function(TreeNode* root, int& maxDia) {
        if(!root) return 0;
        int ll = function(root->left, maxDia);
        int rl = function(root->right, maxDia);
        int dia = ll+rl;
        maxDia = max(maxDia, dia);
        return 1+max(ll, rl);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int maxDia = 0;
        function(root, maxDia);
        return maxDia;
    }
};