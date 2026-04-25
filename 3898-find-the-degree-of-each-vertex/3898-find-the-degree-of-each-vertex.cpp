class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> arr;
        int n=matrix.size();
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(matrix[i][j]==1)
                    count++;
            }
        arr.push_back(count);
        }
        return arr;
    }
};