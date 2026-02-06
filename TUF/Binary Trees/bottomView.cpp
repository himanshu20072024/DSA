/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution {
  public:
    vector<int> bottomView(TreeNode *root)
    {
        if(!root) return {};
        map<int, int> mpp;
        queue<pair<int, TreeNode*>> q;
        q.push({0, root});

        while(!q.empty())
        {
            auto a = q.front();
            q.pop();
            TreeNode* node = a.second;
            int x = a.first;
            //if(mpp.find(x) == mpp.end())
                mpp[x] = node->data;
            if(node->left)
            {
                q.push({x-1, node->left});
            }
            if(node->right)
            {
                q.push({x+1, node->right});
            }
        }

        vector<int> ans;
        for(auto p : mpp)
        {
            ans.push_back(p.second);
        }
        return ans;
};