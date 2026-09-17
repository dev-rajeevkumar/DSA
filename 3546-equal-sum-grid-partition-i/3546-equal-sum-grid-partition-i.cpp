class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<long long> hori(m,0);
        for(int i=0;i<m;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                hori[i]+=grid[i][j];
            }
        }
        long long total=0,curr=0;
        for(int i=0;i<m;i++)total+=1LL*hori[i];
        for(int i=0;i<m;i++){
            curr+=hori[i];
            total-=hori[i];
            if(total==curr)return true;
        }
        vector<long long> ver(n,0);
        for(int i=0;i<m;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                ver[j]+=grid[i][j];
            }
        }
        total=0,curr=0;
        for(int i=0;i<n;i++)total+=1LL*ver[i];
        for(int i=0;i<n;i++){
            curr+=ver[i];
            total-=ver[i];
            if(total==curr)return true;
        }
        return false;
    }
};