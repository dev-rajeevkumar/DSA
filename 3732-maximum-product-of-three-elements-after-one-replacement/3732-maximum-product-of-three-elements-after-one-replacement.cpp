class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<0)nums[i]=-nums[i];
        }
        long long maxi1=0,maxi2=0;
        for(int x:nums){
            if(x>maxi1){
                maxi2=maxi1;
                maxi1=x;
            }
            else if(x>maxi2){
                maxi2=x;
            }
        }
        return maxi1*maxi2*100000;
    }
};