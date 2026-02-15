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
    void function(TreeNode* root, vector<int>& inorder, int& index) {
        if(!root) return;
        function(root->left, inorder, index);
        root->val = inorder[index];
        index++;
        function(root->right, inorder, index);
    }

    void findInorder(TreeNode* root, vector<int>& inorder) {
        if(!root) return;
        findInorder(root->left, inorder);
        inorder.push_back(root->val);
        findInorder(root->right, inorder);
    }

    void recoverTree(TreeNode* root) {
        vector<int> inorder;
        findInorder(root, inorder);

        sort(inorder.begin(), inorder.end());

        int index = 0;
        function(root, inorder, index);
        
    }
};