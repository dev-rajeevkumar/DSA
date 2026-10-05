class Solution {
public:
    int spf(int x){
        for(int i=2;i*i<=x;i++){
            if(x%i==0)return x/i;
        }
        return 1;
    }
    int minOperations(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                int p=spf(nums[i]);
                nums[i]/=p;
                ans++;
                if(nums[i]>nums[i+1])return -1;
            }
        }
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i]<nums[i-1]){
                int p=spf(nums[i-1]);
                nums[i-1]/=p;
                ans++;
                if(nums[i]<nums[i-1])return -1;
            }
        }
        return ans;
    }
};
