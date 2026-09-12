class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        for(int i=1;i<triangle.size();i++){
            for(int j=0;j<=i;j++){
                if(j==0){
                    triangle[i][j]=triangle[i-1][j]+triangle[i][j];
                    continue;
                }
                if(j==i){
                    triangle[i][j]=triangle[i-1][j-1]+triangle[i][j];
                    continue;
                }
                triangle[i][j]=min(triangle[i-1][j],triangle[i-1][j-1])+triangle[i][j];
            }
        }
        int ans=INT_MAX;
        for(int i=0;i<triangle[n-1].size();i++){
            ans=min(ans,triangle[n-1][i]);
        }
        return ans;
    }
};

// class Solution {
// public:
//     int solve(vector<vector<int>>& triangle,int ans,int i,int j){
//         if(i==triangle.size())return ans;
//         return min(solve(triangle,ans+triangle[i][j],i+1,j),solve(triangle,ans+triangle[i][j],i+1,j+1));
//     }
//     int minimumTotal(vector<vector<int>>& triangle) {
//         int out=min(solve(triangle,triangle[0][0],1,0),solve(triangle,triangle[0][0],1,1));
//         return out;
//     }
// };+
