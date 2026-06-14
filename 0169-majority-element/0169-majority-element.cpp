class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=1;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1])
                c++;
            if(c>n/2)
                return nums[i];
            if(nums[i]!=nums[i-1])
                c=1;
        }
        return nums[0];
    }
};