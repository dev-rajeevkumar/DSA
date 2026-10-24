
class Solution {
public:
    int height(TreeNode* r){
        if(r==NULL)return 0;
        return (1+max(height(r->left),height(r->right)));
    }
    void solve(TreeNode* r,int id,vector<vector<int>> & ans){
        if(r==NULL)return;
        ans[id].push_back(r->val);
        solve(r->left,id+1,ans);
        solve(r->right,id+1,ans);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        int n=height(root);
        vector<vector<int>> ans(n);
        solve(root,0,ans);
        return ans;
    }
};