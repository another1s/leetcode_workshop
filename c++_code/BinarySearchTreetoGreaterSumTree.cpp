class Solution {
private:
    int sum;
public:
    TreeNode* bstToGst(TreeNode* root) {
        if (root) {
            sum = 0;
            solve(root);
        }
        
        return root;
    }
    
    void solve(TreeNode* root) {
        if (root->right) {
            solve(root->right);
        }
        
        sum += root->val;
        root->val = sum;
        
        if (root->left) {
            solve(root->left);
        }
    }
};
