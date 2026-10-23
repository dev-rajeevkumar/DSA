class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int ans=pow(2,31)-1;
        int maxi=ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i)ans&=nums[i];
        }
        if(ans==maxi)return 0;
        return ans;
    }
};