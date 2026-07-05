class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<pair<int,int>> f;
        int c=1,i=1;
        for(i;i<nums.size();i++){
            if(nums[i]==nums[i-1])c++;
            else{
                f.push_back({c,nums[i-1]});
                c=1;
            }
        }
        f.push_back({c,nums[i-1]});
        sort(f.rbegin(),f.rend());
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(f[i].second);
        }
        return ans;
    }
};