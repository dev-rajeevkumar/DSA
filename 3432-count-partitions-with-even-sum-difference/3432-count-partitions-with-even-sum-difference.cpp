class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum=0;
        for(int x:nums)sum+=x;
        int ans=0;
        int n=0;
        for(int i=0;i<nums.size()-1;i++){
            n+=nums[i];
            sum-=nums[i];
            if(abs(sum-n)%2==0)ans++;
        }
        return ans;
    }
};