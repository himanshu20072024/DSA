class Solution {
    void changeTree(TreeNode* root) 
    {
        if(root == nullptr) return;
        int children = 0;
        if(root->left) children += root->left->data;
        if(root->right) children += root->right->data;

        if(root->data > children)   
        {
            if(root->left)  root->left->data = root->data;
            if(root->right) root->right->data = root->data;
        }

        changeTree(root->left);
        changeTree(root->right);

        int sum = 0;
        if(root->left) sum += root->left->data;
        if(root->right) sum += root->right->data;

        if(root->left || root->right)    root->data = sum;
    }
};
