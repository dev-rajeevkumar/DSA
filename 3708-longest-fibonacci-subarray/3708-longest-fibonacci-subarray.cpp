class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans=2;
        int c=2;
        for(int i=2;i<nums.size();i++){
            if(nums[i]==nums[i-1]+nums[i-2])c++;
            else{
                ans=max(ans,c);
                c=2;
            }
        }
        ans=max(ans,c);
        return ans;
    }
};