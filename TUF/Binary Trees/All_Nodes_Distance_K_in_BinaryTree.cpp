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
    void setParent(TreeNode* root, map<TreeNode*, TreeNode*>& parent) 
    {
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();

            if (node->left) {
                parent[node->left] = node;
                q.push(node->left);
            }
            if (node->right) {
                parent[node->right] = node;
                q.push(node->right);
            }
        }
    }

    // TreeNode* findTarget(TreeNode* root, int target) 
    // {
    //     if (!root) return NULL;
    //     if (root->val == target) return root;

    //     TreeNode* left = findTarget(root->left, target);
    //     if (left) return left;

    //     return findTarget(root->right, target);
    // }

    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        map<TreeNode*, TreeNode*> parent;
        setParent(root, parent);

        queue<TreeNode*> q;
        map<TreeNode*, bool> visited;

        q.push(target);
        visited[target] = true;

        int currDist = 0;
        while (!q.empty()) {
            int size = q.size();
            if (currDist == k) break;
            currDist++;

            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();

                if (node->left && !visited[node->left]) {
                    q.push(node->left);
                    visited[node->left] = true;
                }
                if (node->right && !visited[node->right]) {
                    q.push(node->right);
                    visited[node->right] = true;
                }
                if (parent.find(node) != parent.end() && !visited[parent[node]]) {
                    q.push(parent[node]);
                    visited[parent[node]] = true;
                }
            }
        }

        vector<int> ans;
        while (!q.empty()) {
            ans.push_back(q.front()->val);
            q.pop();
        }

        return ans;
    }
};