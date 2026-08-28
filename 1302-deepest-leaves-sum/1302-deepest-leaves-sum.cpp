class Solution {
public:
    int hieght(TreeNode* root){
        if(root==NULL)return 0;
        return 1+max(hieght(root->left),hieght(root->right));
    }
    int ans(TreeNode* root,int l,int h){
        if(root==NULL)return 0;
        if(l==h)return root->val;
        return ans(root->left,l+1,h)+ans(root->right,l+1,h);
    }
    int deepestLeavesSum(TreeNode* root) {
        int h=hieght(root);
        return ans(root,1,h);
    }
};