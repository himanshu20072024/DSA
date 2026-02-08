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
		void findTarget(TreeNode* root, int start, TreeNode*& target)
		{
			if(!root) return;
			if(root->data == start) 
			{
				target = root;
				return;
			}
			if(root->left) findTarget(root->left, start, target);
			if(root->right) findTarget(root->right, start, target);
		}

		void setParent(TreeNode* root, unordered_map<TreeNode*, TreeNode*>& parent)
		{
			queue<TreeNode*> q;
			q.push(root);
			while(!q.empty())
			{
				int size = q.size();
				for(int i = 0; i < size; i++)
				{
					TreeNode* node = q.front();
					q.pop();
					if(node->left)
					{
						parent[node->left] = node;
						q.push(node->left);
					}
					if(node->right)
					{
						parent[node->right] = node;
						q.push(node->right);
					}
				}
			}
		}

		int timeToBurnTree(TreeNode* root, int start)
		{
			TreeNode* target = nullptr;
			findTarget(root, start, target);
			unordered_map<TreeNode*, TreeNode*> parent;
			setParent(root, parent);
			int time = 0;

			unordered_map<TreeNode*, bool> visited;
			queue<TreeNode*> q;
			q.push(target);
			visited[target] = true;

			while(!q.empty())
			{
				int size = q.size();
				bool check = false;
				for(int i = 0; i < size; i++)
				{
					TreeNode* node = q.front();
					q.pop();
					if(node->left && !visited[node->left])
					{
						q.push(node->left);
						visited[node->left] = true;
						check = true;
					}
					if(node->right && !visited[node->right])
					{
						q.push(node->right);
						visited[node->right] = true;
						check = true;
					}
					if(parent.find(node) != parent.end() && !visited[parent[node]])
					{
						q.push(parent[node]);
						visited[parent[node]] = true;
						check = true;
					}
				}
				if(check == true) time++;
			}
			return time;
		}	
};

























