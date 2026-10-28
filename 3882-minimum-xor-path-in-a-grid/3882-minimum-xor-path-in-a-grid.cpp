class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<bitset<1024>> dp(n);
        dp[0][0]=1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                bitset<1024> reach;
                if(j==0) reach=dp[j];
                else reach=dp[j]|dp[j-1];
                dp[j].reset();
                for(int x=0;x<1024;x++){
                    if(reach[x]) dp[j][x^grid[i][j]]=1;
                }
            }
        }
        int x=0;
        while(dp[n-1][x]==0) x++;
        return x;
    }
};