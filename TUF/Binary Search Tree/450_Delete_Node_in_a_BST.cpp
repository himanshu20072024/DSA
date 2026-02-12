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
    TreeNode* helper(TreeNode* node) {
        if(node->left == nullptr) {
            return node->right;
        }
        if(node->right == nullptr) {
            return node->left;
        }

        TreeNode* left = node->left;
        TreeNode* ans = node->left;
        TreeNode* right = node->right;

        while(left->right) {
            left = left->right;
        }
        left->right = right;
        return ans;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return nullptr;
        if(root->val == key) {
            return helper(root);
        }

        TreeNode* dummy = root;

        while(root != nullptr) {
            if(root->val > key) {
                if(root->left != nullptr && root->left->val == key) {
                    root->left = helper(root->left);
                    break;
                } else {
                    root = root->left;
                }
            } else {
                if(root->right != nullptr && root->right->val == key) {
                    root->right = helper(root->right);
                    break;
                } else {
                    root = root->right;
                }
            }
        }
        return dummy;
        
    }
};