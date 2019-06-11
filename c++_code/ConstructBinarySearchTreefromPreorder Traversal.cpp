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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root = new TreeNode(preorder[0]);
        for(int i=0;i<preorder.size();i++)
        {
            create_tree(root,preorder[i]);
        }
        return root;
    }
    
    
    void create_tree(TreeNode* node,int val)
    {
        TreeNode* newnode = new TreeNode(val);
        if(node!=NULL)
        {
            if(node->val<val)
            {
                if(node->right!=NULL)
                {
                    create_tree(node->right,val);
                }
                else{
                    node->right = newnode;
                }
            }
            if(node->val>val)
            {
                if(node->left!=NULL)
                {
                    create_tree(node->left,val);
                }
                else{
                    node->left = newnode;
                }
            }
        }
    }
    
};
