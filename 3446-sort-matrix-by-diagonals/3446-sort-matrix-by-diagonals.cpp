class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        for(int k=0;k<m;k++){
            vector<int> ans;
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(i==j+k){
                        ans.push_back(grid[i][j]);
                    }
                }
            }
            sort(ans.begin(),ans.end());
            int id=ans.size()-1;
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(i==j+k){
                        grid[i][j]=ans[id];
                        id--;
                    }
                }
            }
        }
        for(int k=1;k<n;k++){
            vector<int> ans;
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(j==i+k){
                        ans.push_back(grid[i][j]);
                    }
                }
            }
            sort(ans.begin(),ans.end());
            int id=0;
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(j==i+k){
                        grid[i][j]=ans[id];
                        id++;
                    }
                }
            }
        }
        return grid;
    }
};