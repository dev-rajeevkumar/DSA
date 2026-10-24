class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* r) {
        if(p==NULL && r==NULL)return true;
        if(p==NULL || r==NULL)return false;
        if(p->val != r->val)return false;
        return (isSameTree(p->left,r->left)&&isSameTree(p->right,r->right));
    }
};