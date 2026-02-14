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
    void findInorder(TreeNode* root, vector<int>& inorder) {
        if(!root) return;
        findInorder(root->left, inorder);
        inorder.push_back(root->val);
        findInorder(root->right, inorder);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> inorder;
        findInorder(root, inorder);

        int left = 0;
        int right = inorder.size() - 1;

        while(left < right) {
            if(inorder[left] + inorder[right] == k) {
                return true;
                break;
            } else if(inorder[left] + inorder[right] > k) {
                right--;
            } else {
                left++;
            }
        }
        return false;
    }
};