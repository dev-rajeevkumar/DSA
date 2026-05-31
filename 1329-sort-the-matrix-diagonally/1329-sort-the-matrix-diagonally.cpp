class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        for(int k=0;k<m;k++){
            vector<int> ans;
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(i==j+k){
                        ans.push_back(mat[i][j]);
                    }
                }
            }
            sort(ans.begin(),ans.end());
            int id=0;
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(i==j+k){
                        mat[i][j]=ans[id];
                        id++;
                    }
                }
            }
        }
        for(int k=1;k<n;k++){
            vector<int> ans;
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(j==i+k){
                        ans.push_back(mat[i][j]);
                    }
                }
            }
            sort(ans.begin(),ans.end());
            int id=0;
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(j==i+k){
                        mat[i][j]=ans[id];
                        id++;
                    }
                }
            }
        }
        return mat;
    }
};