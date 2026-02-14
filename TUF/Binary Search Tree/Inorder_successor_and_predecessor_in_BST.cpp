/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

 // time : O(H)
  // space : O(1)

  // this one is optimal approach we can also do inorder traversal and find the key and return 
class Solution{
	public:
		int succ(TreeNode* root, int& key) {
			int ans = -1;
			while(root) {
				if(root->data > key) {
					ans = root->data;
					root = root->left;
				} else {
					root = root->right;
				}
			}
			return ans;
		}

		int pred(TreeNode* root, int& key) {
			int ans = -1;
			while(root) {
				if(root->data >= key) {
					root = root->left;
				} else {
					ans = root->data;
					root = root->right;
				}
			}
			return ans;
		}

		vector<int> succPredBST(TreeNode* root,int key){
			vector<int> ans(2,0);
			ans[0] = succ(root, key);
			ans[1] = pred(root, key);
			return {ans[1], ans[0]};
		}
};