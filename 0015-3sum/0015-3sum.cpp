class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> st;
        sort(nums.begin(),nums.end());
        int zero=0;
        for(int i=0;i<nums.size();i++){
            int a=i+1;
            int b=nums.size()-1;
            while(a<b){
                if(nums[i]+nums[a]+nums[b]==0){
                    if(zero==1){
                        b--;
                        continue;
                    }
                    if(nums[i]==nums[a] && nums[a]==nums[b])
                        zero++;
                    vector<int> temp = {nums[i], nums[a], nums[b]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);                    }
                if(nums[i]+nums[a]+nums[b]<0){
                    a++;
                    continue;
                }
                if(nums[i]+nums[a]+nums[b]>0){
                    b--;
                    continue;
                }
                b--;
            }
        }
        for(auto x:st){
            ans.push_back(x);
        }
        return ans;
    }
};
