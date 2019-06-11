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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        insert(root,val);
        return root;
    }
    void insert(TreeNode* node, int val)
    {
        if(val<=node->val)
        {
            if(node->left==NULL)
            {
                TreeNode* newnode = new TreeNode(val);
                node->left = newnode;
            }
            else{
                insertIntoBST(node->left, val);
            }
        }
        if(val>node->val)
        {
            if(node->right==NULL)
            {
                TreeNode* newnode = new TreeNode(val);
                node->right = newnode;
            }
            else{
                insertIntoBST(node->right, val);
            }
        }
    }
};
