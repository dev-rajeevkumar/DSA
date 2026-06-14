class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n=nums.size();
        int sum=0,cur=0;
        for(int i=0;i<n;i++) sum+=nums[i];
        for(int i=0;i<n;i++) cur+=nums[i]*i;
        int ans=cur;
        for(int i=n-1;i>0;i--){
            cur=cur-(nums[i]*n)+sum;
            if(cur>ans) ans=cur;
        }
        return ans;
    }
};