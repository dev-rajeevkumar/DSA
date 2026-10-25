class Solution {
public:
    bool dfs(vector<vector<int>>& grid, int i, int j) {
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size()) return true;
        if(grid[i][j]==1) return true;
        int x=grid[i][j];
        grid[i][j]=1;
        bool a=dfs(grid,i,j+1);
        bool b=dfs(grid,i+1,j);
        bool c=dfs(grid,i,j-1);
        bool d=dfs(grid,i-1,j);
        if(i==0 || i==grid.size()-1 || j==0 || j==grid[0].size()-1) return false;
        return a && b && c && d;
    }
    int closedIsland(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=1;i<grid.size()-1;i++){
            for(int j=1;j<grid[i].size()-1;j++){
                if(grid[i][j]==0){
                    if(dfs(grid,i,j))ans++;
                }
            }
        }
        return ans;
    }
};