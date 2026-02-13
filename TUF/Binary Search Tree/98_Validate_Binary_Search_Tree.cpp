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
    void function(TreeNode* root, vector<int>& inorder)
    {
        if(!root) return;
        function(root->left, inorder);
        inorder.push_back(root->val);
        function(root->right, inorder);
    }

    bool isValidBST(TreeNode* root) 
    {
        vector<int> inorder;
        function(root, inorder);  
        for(int i = 0; i < inorder.size()-1; i++) {
            if(inorder[i+1] <= inorder[i]) return false;
        }
        return true;
    }
};