class Solution {
public:
    long long maxSum(vector<vector<int>>& grid, vector<int>& limits, int k) {
        for(int i=0;i<grid.size();i++){
            sort(grid[i].rbegin(),grid[i].rend());
        }
        vector<int>ans;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<limits[i];j++){
                ans.push_back(grid[i][j]);
            }
        }
        sort(ans.rbegin(),ans.rend());
        long long out=0;
        for(int i=0;i<k;i++)out+=ans[i];
        return out;
    }
};