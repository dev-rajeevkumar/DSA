class Solution {
public:
    bool canpass(vector<int>& nums, int t,int m){
        int sum=0;
        for(int x:nums){
            sum+=(x+m-1)/m;
        }
        if(sum<=t)return true;
        return false;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int high=nums[0];
        for(int x:nums)if(x>high)high=x;
        int low=1;
        int mid=(low+high)/2;
        while(low<=high){
            if(canpass(nums,threshold,mid)){
                high=mid-1;
                mid=(low+high)/2;
            }
            else{
                low=mid+1;
                mid=(low+high)/2;
            }
        }
        return mid+1;
    }
};