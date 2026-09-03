class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        long long ans=INT_MIN;
        int n=nums.size();
        vector<long long> presum(n);
        presum[0]=1LL*nums[0];
        for(int i=1;i<n;i++){
            presum[i]=1LL*nums[i]+presum[i-1];
        }
        vector<int> suffmin(n);
        suffmin[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            suffmin[i]=min(suffmin[i+1],nums[i]);
        }
        for(int i=0;i<n-1;i++){
            long long x=1LL*presum[i]-suffmin[i+1];
            ans=max(ans,x);
        }
        return ans;
    }
};