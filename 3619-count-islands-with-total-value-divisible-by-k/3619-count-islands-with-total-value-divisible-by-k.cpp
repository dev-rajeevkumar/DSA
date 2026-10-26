class Solution {
public:
    long long dfs(vector<vector<int>>& grid, int i, int j) {
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size()) return 0;
        if(grid[i][j]==0) return 0;
        int x=grid[i][j];
        grid[i][j]=0;
        return 1LL*(x+dfs(grid,i,j+1)+dfs(grid,i+1,j)+dfs(grid,i,j-1)+dfs(grid,i-1,j));
    }
    int countIslands(vector<vector<int>>& grid, int k) {
        int ans=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]>0){
                    if(dfs(grid,i,j)%k==0)ans++;
                }
            }
        }
        return ans;
    }
};