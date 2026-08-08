class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        ans.push_back(nums.back());
        for(int i=nums.size()-1;i>=0;i--){
            if(ans.size()==k)break;
            if(nums[i]<ans.back())ans.push_back(nums[i]);
        }
        return ans;
    }
};