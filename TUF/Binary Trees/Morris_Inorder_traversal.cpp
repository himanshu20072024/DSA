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
    vector<int> inorderTraversal(TreeNode* root) 
    {
        vector<int> ans;
        TreeNode* curr = root;
        while(curr)
        {
            if(!curr->left)
            {
                ans.push_back(curr->val);
                curr = curr->right;
            }
            else
            {
                // find inorder predecceser
                TreeNode* IP = curr->left;
                while(IP->right != nullptr and IP->right != curr)
                {
                    IP = IP->right;
                }
                if(IP->right == nullptr)
                {
                    IP->right = curr;  // create the thread
                    curr = curr->left;
                }
                else
                {
                    IP->right = nullptr;  // destroyed the thread
                    ans.push_back(curr->val);
                    curr = curr->right;
                }
            }
        }    
        return ans;
    }
};