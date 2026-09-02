class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        vector<long long> ans;
        ans.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i]==ans.back()){
                ans.back()*=2;
            }
            else ans.push_back(nums[i]);
            while(ans.size()>1 && ans.back()==ans[ans.size()-2]){
                ans.pop_back();
                ans.back()*=2;
            }    
        }
        return ans;
    }
};