class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(target<=nums[nums.size()-1]){
            for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]==target)
                return i;
        }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target)
                return i;
        }
        return -1;
    }
};