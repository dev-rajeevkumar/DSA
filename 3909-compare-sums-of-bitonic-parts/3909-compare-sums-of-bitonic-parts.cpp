class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        long long sum=nums[0];
        int i;
        for( i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1])break;
            sum+=nums[i];
        }
        i--;
        for( i;i<nums.size();i++){
            sum-=nums[i];
        }
        if(sum>0)return 0;
        if(sum<0)return 1;
        return -1;
    }
};