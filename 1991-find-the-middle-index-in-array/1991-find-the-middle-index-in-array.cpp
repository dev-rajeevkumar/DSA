class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int left=0;
        int right=0;
        for(int x:nums){
            right+=x;
        }
        for(int i=0;i<nums.size();i++){
            left+=nums[i];
            right-=nums[i];
            if(left-nums[i] == right)
                return i;
        }
        return -1;
    }
};