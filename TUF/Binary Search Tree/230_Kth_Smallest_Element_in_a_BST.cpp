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
    int count = 0;
    int function(TreeNode* root, int k) {
        if(!root) return -1;
        int left = function(root->left, k);
        if(left != -1) return left;
        count++;
        if(count == k) return root->val;
        return function(root->right, k);
    }

    int kthSmallest(TreeNode* root, int k) {
        return function(root, k);
    }
};