/**
 * Definition for a binary tree node.
 * class TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution {
public:
    vector<int> floorCeilOfBST(TreeNode* root, int key) 
	{
        int floor = -1, ceil = -1;

        while (root) {
            if (root->data == key) 
			{
                floor = ceil = root->data;
                break;
            }
            else if (root->data < key) 
			{
                floor = root->data;     // candidate floor
                root = root->right;
            }
            else 
			{
                ceil = root->data;      // candidate ceil
                root = root->left;
            }
        }

        return {floor, ceil};
    }
};

};