class Solution {
public:
    bool canpositive(vector<int>& nums,long long mid){
        int ans=0;
        for(int x:nums){
            ans+=(x+mid-1)/mid;
        }
        if(ans<=(1LL*mid*mid))return true;
        return false;
    }
    int minimumK(vector<int>& nums) {
        int low=1;
        long long high=0;
        for(int x:nums){
            high+=x;
            if(high>5000)break;
        }
        long long mid=low+(high-low)/2;
        while(low<=high){
            if(canpositive(nums,mid)){
                high=mid-1;
            }
            else low=mid+1;
            mid=low+(high-low)/2;
        }
        return mid;
    }
};