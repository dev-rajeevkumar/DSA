class Solution {
public:
    int total(TreeNode* root) {
        int ans=0;
        if(root==NULL)return 0;
        ans+=root->val;
        return ans+total(root->left)+total(root->right);
    }
    int count(TreeNode* root) {
        int ans=0;
        if(root==NULL)return 0;
        ans+=1;
        return ans+count(root->left)+count(root->right);
    }
    int averageOfSubtree(TreeNode* root) {
        if(root==NULL)return 0;
        int ans=0;
        int a=total(root);
        int b=count(root);
        if(a/b==root->val)ans++;
        ans+=averageOfSubtree(root->left)+averageOfSubtree(root->right);
        return ans;
    }
};