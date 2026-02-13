/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == nullptr)  return nullptr;

        int curr_val = root->val;

        if(curr_val > p->val && curr_val > q->val) {
            return lowestCommonAncestor(root->left, p, q);
        } else if(curr_val < p->val && curr_val < q->val) {
            return lowestCommonAncestor(root->right, p, q);
        }
        return root;
    }
};