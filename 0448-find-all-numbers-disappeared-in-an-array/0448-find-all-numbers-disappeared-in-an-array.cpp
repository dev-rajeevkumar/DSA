class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            ans[nums[i]-1]++;
        }
        vector<int> out;
        for(int i=0;i<ans.size();i++){
            if(ans[i]==0){
                out.push_back(i+1);
            }
        }
        return out;
    }
};