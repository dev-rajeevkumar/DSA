class Solution {
public:
    long long maximumMedianSum(vector<int>& nums) {
        long long ans=0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=(n/3);i<n;i=i+2){
            ans+=nums[i];
        }
        return ans;
    }
};