class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        int maxleft = maxDepth(root->left);
        int maxright = maxDepth(root->right);
        return max(maxleft, maxright)+1;
        
    }
};
