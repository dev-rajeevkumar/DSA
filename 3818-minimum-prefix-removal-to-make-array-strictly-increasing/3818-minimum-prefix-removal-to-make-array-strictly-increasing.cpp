class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        int c=0;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1])c++;
            else break;
        }
        return nums.size()-c-1;
    }
};