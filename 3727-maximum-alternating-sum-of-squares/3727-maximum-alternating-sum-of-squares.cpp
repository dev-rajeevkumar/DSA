class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long ans=0;
        for(int i=0;i<nums.size();i++)nums[i]=abs(nums[i]);
        sort(nums.begin(),nums.end());
        int n=nums.size()/2;
        for(int i=0;i<n;i++)ans-=(nums[i]*nums[i]);
        for(int i=n;i<nums.size();i++)ans+=(nums[i]*nums[i]);
        return ans;
    }
};