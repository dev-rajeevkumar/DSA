class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        for(int i=0;i<queries.size();i++){
            int id=queries[i][0];
            while(id<=queries[i][1]){
                nums[id]=(1LL*nums[id]*queries[i][3]) % 1000000007;
                id+=queries[i][2];
            }
        }
        int ans=nums[0];
        for(int i=1;i<nums.size();i++)ans^=nums[i];
        return ans;
    }
};