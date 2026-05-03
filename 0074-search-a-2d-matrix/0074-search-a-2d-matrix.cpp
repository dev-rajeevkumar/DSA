class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();
        int c=matrix[0].size();
        int f=-1;
        for(int i=0;i<r;i++){
            if(matrix[i][c-1]>=target){
                f=i;
                break;
            }
        }
        if(f==-1)
            return false;
        for(int i=0;i<c;i++){
            if(matrix[f][i]==target){
                return true;
            }
        }
        return false;
    }
};