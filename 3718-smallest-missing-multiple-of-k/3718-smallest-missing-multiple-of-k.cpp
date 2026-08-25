class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int x=k;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]<k)continue;
            if(nums[i]==k)k+=x;
            if(nums[i]>k)return k;
        }
        return k;
    }
};