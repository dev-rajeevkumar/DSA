class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n=nums.size(),x=0;
        for(int i=0;i<n;i++) x=x^nums[i];
        if(x>0)return n;
        for(int i=0;i<n;i++) if((x^nums[i])>0)return n-1;
        return 0;
    }
};