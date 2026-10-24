class Solution {
public:
int height(TreeNode* r){
        if(r==NULL)return 0;
        return (1+max(height(r->left),height(r->right)));
    }
    int maxDepth(TreeNode* root) {
        int n=height(root);
        return n;
    }
};