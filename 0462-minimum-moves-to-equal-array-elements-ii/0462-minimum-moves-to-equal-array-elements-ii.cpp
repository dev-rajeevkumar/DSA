class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum=0;
        for(int x:nums)sum+=x;
        sum=sum/nums.size();
        int out=INT_MAX;
        int n=nums.size();
            int ans=0;
            for(int x:nums)ans=ans+1LL*abs(x-nums[n/2]);
            out=min(out,ans);
        return out;
    }
};