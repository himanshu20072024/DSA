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
		void function(TreeNode* node, vector<int>& ds, vector<vector<int>>& ans)
		{
			if(node == nullptr)
			{
				return;
			}
			ds.push_back(node->data);
			function(node->left, ds, ans);
			function(node->right, ds, ans);
			if(!node->left and !node->right)
				ans.push_back(ds);
			ds.pop_back();
		}

		vector<vector<int>> allRootToLeaf(TreeNode* root) 
		{
			vector<vector<int>> ans;
			vector<int> ds;
			//ds.push_back(root->data);
			function(root, ds, ans);
			return ans;
		}
};