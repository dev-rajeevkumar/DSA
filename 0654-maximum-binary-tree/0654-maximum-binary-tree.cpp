TreeNode* mbt(vector<int>& nums,int l,int r){
        if(l>=r)return NULL;
        int id=l;
        for(int i=l;i<r;i++){
            if(nums[i]>nums[id])id=i;
        }
        TreeNode* root = new TreeNode(nums[id]);
        root->left=mbt(nums,l,id);
        root->right=mbt(nums,id+1,r);
        return root;
    }
class Solution {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        TreeNode* root = mbt(nums,0,nums.size());
        return root;
    }
};