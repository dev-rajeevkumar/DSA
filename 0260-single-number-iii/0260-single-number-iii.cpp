class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int n=nums.size();
        if(nums[0]!=nums[1])
            ans.push_back(nums[0]);
        if(nums[n-1]!=nums[n-2])
            ans.push_back(nums[n-1]);
        for(int i=1;i<n-1;i++){
           if((nums[i]!=nums[i+1])&&(nums[i]!=nums[i-1]))
            ans.push_back(nums[i]);
            if(ans.size()==2)
                break;
        }
        return ans;
    }
};