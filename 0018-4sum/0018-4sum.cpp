class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        set<vector<int>> st;
        sort(nums.begin(),nums.end());
        int zero=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
            int a=j+1;
            int b=nums.size()-1;
            while(a<b){
                if(i==a||i==b||i==j||j==a||j==b||a==b){
                    b--;
                    continue;
                }
                if(1LL*nums[i] + nums[j] + nums[a] + nums[b]==target){
                    if(zero==1){
                        b--;
                        continue;
                    }
                    if(nums[i]==0 && nums[j]==0 && nums[a]==0 && nums[b]==0)
                        zero++;
                    vector<int> temp = {nums[i],nums[j], nums[a], nums[b]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                if(1LL*nums[i] + nums[j] + nums[a] + nums[b]<target){
                    a++;
                    continue;
                }
                if(1LL*nums[i] + nums[j] + nums[a] + nums[b]>target){
                    b--;
                    continue;
                }
                b--;
            }
            }
        }
        for(auto x:st){
            ans.push_back(x);
        }
        return ans;
    }
};