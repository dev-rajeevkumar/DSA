class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1)return nums[0];
        vector<int> f(51,0);
        for(int i=0;i<n;i++) f[nums[i]]++;
        if(k==1)for(int i=50;i>=0;i--)if(f[i]==1)return i;
        if(k==n)for(int i=50;i>=0;i--)if(f[i]>0)return i;
        if(nums[0]!=nums.back()){
            int ans= max(nums[0],nums.back());
            if(f[nums[0]]==1 && f[nums.back()]==1)return ans;
            else if(f[nums[0]]==1)return nums[0];
            else if(f[nums.back()]==1)return nums.back();
        }
        return -1;
    }
};
        
        