class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>> ans((m-k+1),vector<int>(n-k+1,0));
        if(k==1)return ans;
        for(int i=0;i<m-k+1;i++){
            for(int j=0;j<n-k+1;j++){
                vector<int> temp;
                for(int p=i;p<i+k;p++){
                    for(int q=j;q<j+k;q++){
                        temp.push_back(grid[p][q]);
                    }
                }
                sort(temp.begin(),temp.end());
                int x=INT_MAX;
                for(int z=1;z<temp.size();z++){
                    int d=abs(temp[z]-temp[z-1]);
                    if(d==0)continue;
                    x=min(x,d);
                }
                if(x!=INT_MAX)ans[i][j]=x;
            }
        }
        return ans;
    }
};