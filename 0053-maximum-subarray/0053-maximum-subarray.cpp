class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int m=nums.size();
        int cur=0,maxi=0;
        int mini=INT_MIN;
        for(int i=0;i<m;i++){
            cur+=nums[i];
            if(cur<0)
                cur=0;
            if(cur>maxi)
                maxi=cur;
            if(nums[i]>mini)
                mini=nums[i];
        }
        if(maxi==0)
            return mini;
        return maxi;
    }
};