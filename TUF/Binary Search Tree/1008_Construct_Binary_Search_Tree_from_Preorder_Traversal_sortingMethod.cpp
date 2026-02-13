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

 //  this one is better solution

 
class Solution {
public:
    int find(vector<int>& inorder, TreeNode* root) {
        for(int i = 0; i < inorder.size(); i++) {
            if(inorder[i] == root->val) return i;
        }
        return -1;
    }

    TreeNode* helper(vector<int>& inorder, vector<int>& preorder, int& preidx, int left, int right) {
        if(left > right) return nullptr;
        TreeNode* root = new TreeNode(preorder[preidx]);
        preidx++;
        int inidx = find(inorder, root);
        root->left = helper(inorder, preorder, preidx, left, inidx-1);
        root->right = helper(inorder, preorder, preidx, inidx+1, right);
        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        vector<int> inorder(preorder.size(), 0);
        vector<int> copy(preorder);
        sort(copy.begin(), copy.end());
        inorder = copy;
        int left = 0;
        int right = preorder.size() - 1;
        int preidx = 0;
        return helper(inorder, preorder, preidx, left, right);
    }
};