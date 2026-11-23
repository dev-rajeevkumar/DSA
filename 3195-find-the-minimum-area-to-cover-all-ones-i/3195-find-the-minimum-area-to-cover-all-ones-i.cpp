class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int n=grid.size();
        int l1=n,l2=0,b1=n,b2=0,c=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    l1=min(l1,i);
                    b1=min(b1,j);
                    l2=max(l2,i);
                    b2=max(b2,j);
                    c++;
                }
            }
        }
        if(c==1)return 1;
        return (l2-l1+1)*(b2-b1+1);
    }
};