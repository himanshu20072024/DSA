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


 // time complexity is : O(N^2)
 // if i will use hashmap unordered map then it will become O(N)
class Solution {
public:
    int function(vector<int>& inorder, int val)
    {
        for(int i = 0; i < inorder.size(); i++)
        {
            if(inorder[i] == val)
                return i;
        }
        return -1;
    }

    TreeNode* helper(vector<int>& inorder, vector<int>& postorder, int left, int right, int& postIdx)
    {
        if(left > right) return nullptr;
        TreeNode* root = new TreeNode(postorder[postIdx]);
        postIdx--;
        int inIdx = function(inorder, root->val);
        root->right = helper(inorder, postorder, inIdx+1, right, postIdx);
        root->left = helper(inorder, postorder, left, inIdx-1, postIdx);
        
        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) 
    {
        int right = postorder.size() - 1;
        int left = 0;
        int postIdx = right;
        return helper(inorder, postorder, left, right, postIdx);    
    }
};