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
    vector<int> preorderTraversal(TreeNode* root) 
    {
        TreeNode* curr = root;
        vector<int> ans;
        while(curr)
        {
            if(!curr->left)
            {
                ans.push_back(curr->val);
                curr = curr->right;
            }
            else
            {
                // find PP
                TreeNode* PP = curr->left;
                while(PP->right != nullptr && PP->right != curr)
                {
                    PP = PP->right;
                }
                if(PP->right == nullptr)
                {
                    PP->right = curr;
                    ans.push_back(curr->val);
                    curr = curr->left;
                }
                else
                {
                    PP->right = nullptr;
                    curr = curr->right;
                }
            }
        }    
        return ans;
    }
};