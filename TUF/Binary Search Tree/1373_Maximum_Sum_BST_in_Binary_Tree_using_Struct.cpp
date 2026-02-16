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
    struct NodeInfo {
        bool isBST;
        int sum;
        int minVal;
        int maxVal;
    };

    NodeInfo dfs(TreeNode* root, int& ans) {
        if(!root) return {true, 0, INT_MAX, INT_MIN};

        NodeInfo left = dfs(root->left, ans);
        NodeInfo right = dfs(root->right, ans);

        NodeInfo curr;

        
        if(left.isBST && right.isBST && root->val > left.maxVal && root->val < right.minVal) {
            curr.isBST = true;
            curr.sum = left.sum + right.sum + root->val;
            ans = max(ans, curr.sum);
            curr.minVal = min(root->val, left.minVal);
            curr.maxVal = max(root->val, right.maxVal);
        } else {
            curr.isBST = false;
            curr.minVal = INT_MIN;
            curr.maxVal = INT_MAX;
            curr.sum = max(left.sum, right.sum);
        }
        return curr;
    }

    int maxSumBST(TreeNode* root) {
        int ans = 0;
        dfs(root, ans);
        return ans;
    }
};