class Solution {
public:
    bool inabc(vector<int>& abc,int a){
        for(int i=0;i<abc.size();i++){
            if(abc[i]==a)
                return false;
        }
        return true;
    }
    vector<vector<int>> findMatrix(vector<int>& nums) {
    vector<vector<int>> ans;
    while(nums.size()!=0){
        vector<int> abc;
            for(int i=0;i<nums.size();i++){
                if(inabc(abc,nums[i])){
                    abc.push_back(nums[i]);
                    nums.erase(nums.begin() + i);
                    i--;
                }
            }
        ans.push_back(abc);
        }
        return ans;
    }
};