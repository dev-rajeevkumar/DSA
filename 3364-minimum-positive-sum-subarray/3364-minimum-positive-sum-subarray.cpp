class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int ans=INT_MAX;
        for(int i=l;i<=r;i++){
            int c=i;
            int sum=0;
            for(int j=0;j<nums.size();j++){
                if(c>0){
                    sum+=nums[j];
                    c--;
                    if(c==0 && sum>0)ans=min(ans,sum);
                    continue;
                }
                sum+=nums[j];
                sum-=nums[j-i];
                if(sum>0){
                    ans=min(ans,sum); 
                }  
            }
        }
        if(ans==INT_MAX)return -1;
        return ans;
    }
};