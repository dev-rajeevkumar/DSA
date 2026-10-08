class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;
        for(int x:nums){
            int mini=x;
            int n=max(0,x-5000);
            for(int i=x;i>n;i--){
                if((i|(i+1))==x){
                    mini=min(mini,i);
                }
            }
            if(mini==x)ans.push_back(-1);
            else ans.push_back(mini);
        }
        return ans;
    }
};