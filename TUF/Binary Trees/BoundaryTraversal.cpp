/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution{
public:
    bool child(TreeNode* node)
    {
        if(!node) return false;
        if(!node->left and !node->right) return true;
        return false;
    }

    void childnodes(TreeNode* root, vector<int>& ans)
    {
        if(!root) return;
        childnodes(root->left, ans);
        if(child(root)) ans.push_back(root->data);
        childnodes(root->right, ans);
    }

    void leftpart(TreeNode* root, vector<int>& ans)
    {
        if(!root) return;
        if(!child(root)) ans.push_back(root->data);
        if(root->left) leftpart(root->left, ans);
        else if(root->right) leftpart(root->right, ans);
    }

    void rightpart(TreeNode* root, vector<int>& ans, stack<int>& st)
    {
        if(!root) return;
        if(!child(root)) st.push(root->data);
        if(root->right) rightpart(root->right, ans, st);
        else if(root->left) rightpart(root->left, ans, st);
    }

    vector <int> boundary(TreeNode* root)
    {
        vector<int> ans;
        if(!root) return ans;
        ans.push_back(root->data);
        leftpart(root->left, ans);
        childnodes(root, ans);
        stack<int> st;
        rightpart(root->right, ans, st);
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};