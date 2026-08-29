class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(cloned==NULL)return 0;
        if(cloned->val==target->val)return cloned;
        TreeNode* ans = getTargetCopy(original, cloned->left, target);
        if(ans!=NULL)return ans;
        return getTargetCopy(original,cloned->right,target);
    }
};