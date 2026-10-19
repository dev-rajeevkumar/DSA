class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int l=0,m=0;
        for(int x:nums){
            if(x>target)m++;
            if(x<target)l++;
        }
        int n=nums.size();
        vector<int> ans;
        for(int i=l;i<n-m;i++){
            ans.push_back(i);
        }
        return ans;
    }
};