class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int flag=1;
            if(i>=k && nums[i]<=nums[i-k])flag=0;
            if(i<n-k && nums[i]<=nums[i+k])flag=0;
            if(flag)ans+=nums[i];
        }
        return ans;
    }
};