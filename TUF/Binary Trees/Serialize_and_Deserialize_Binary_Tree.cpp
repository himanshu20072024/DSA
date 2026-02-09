/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) 
    {
        if(!root) return "";
        string s = "";
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* node = q.front();
            q.pop();
            if(node == nullptr) s.append("#,");
            else
            {
                s.append(to_string(node->val)+",");
                q.push(node->left);
                q.push(node->right);
            }
        }    
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) 
    {
        if(data.size() == 0) return nullptr;
        stringstream s(data);  // consider it like we can now travel through the string like we take cin >> a >> b >> c like this
        string str;
        getline(s, str, ',');  // from s push to str everything till we encounter ','
        TreeNode* root = new TreeNode(stoi(str));
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* node = q.front();
            q.pop();
            getline(s, str, ',');
            if(str == "#")
            {
                node->left = nullptr;
            }
            else
            {
                TreeNode* nodeLeft = new TreeNode(stoi(str));
                node->left = nodeLeft;
                q.push(nodeLeft);
            }
            getline(s, str, ',');
            if(str == "#")
            {
                node->right = nullptr;
            }
            else
            {
                TreeNode* nodeRight = new TreeNode(stoi(str));
                node->right = nodeRight;
                q.push(nodeRight);
            }
        }
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));