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
    // {minVal, maxVal, Sum}
    vector<int> postOrder(TreeNode* root, int& ans) {
        if(!root) return {INT_MAX, INT_MIN, 0};
        vector<int> leftSubtree = postOrder(root->left, ans);
        vector<int> rightSubtree = postOrder(root->right, ans);

        if(root->val > leftSubtree[1] && root->val < rightSubtree[0]) {
            int sum = (leftSubtree[2] + rightSubtree[2] + root->val);
            ans = max(ans, sum);
            int minVal = min(root->val, leftSubtree[0]);
            int maxVal = max(root->val, rightSubtree[1]);
            return {minVal, maxVal, sum};
        } else {
            int maxSum = max(leftSubtree[2], rightSubtree[2]);
            return {INT_MIN, INT_MAX, maxSum};
        }
    }

    int maxSumBST(TreeNode* root) {
        int ans = 0;
        postOrder(root, ans);
        return ans;
    }
};