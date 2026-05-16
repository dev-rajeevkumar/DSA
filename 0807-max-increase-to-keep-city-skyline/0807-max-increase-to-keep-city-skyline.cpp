class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n=grid.size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int hor=INT_MIN;
                int ver=INT_MIN;
                for(int k=0;k<n;k++){
                    if(hor<grid[i][k])
                        hor=grid[i][k];
                }
                for(int k=0;k<n;k++){
                    if(ver<grid[k][j])
                        ver=grid[k][j];
                }
                ans=ans+min(hor,ver)-grid[i][j];
            }
        }
        return ans;
    }
};