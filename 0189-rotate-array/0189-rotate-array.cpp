class Solution {
public:
    void rotate(vector<int>& nums, int k) {
         int n=nums.size();
         vector<int> ans;
         k=k%n;
         k=n-k;
         for(int i=k;i<n;i++){
            ans.push_back(nums[i]);
         }
         for(int j=0;j<k;j++){
            ans.push_back(nums[j]);
         }
    nums=ans;
    }
};