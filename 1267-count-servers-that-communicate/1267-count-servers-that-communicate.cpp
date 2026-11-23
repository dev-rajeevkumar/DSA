class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size(),ans=0;
        vector<int> col(m,0),row(n,0);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                col[i]+=grid[i][j];
                row[j]+=grid[i][j];
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1 && (col[i]>1 || row[j]>1))ans++;
            }
        }
        return ans;
    }
};