class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<int> len;
        int n=points.size();
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            len.push_back((points[i][0]*points[i][0])+(points[i][1]*points[i][1]));
        }
        vector<int> sortedlen=len;
        sort(sortedlen.begin(),sortedlen.end());
        int x=sortedlen[k-1];
        for(int i=0;i<n;i++){
            if(len[i]<=x){
                ans.push_back({points[i][0],points[i][1]});
            }
        }
        return ans;
    }
};