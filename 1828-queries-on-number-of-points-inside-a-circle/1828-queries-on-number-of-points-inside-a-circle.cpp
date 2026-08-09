class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> ans;
        for(int i=0;i<queries.size();i++){
            int c=0;
            for(int j=0;j<points.size();j++){
                int x=(abs(queries[i][0]-points[j][0])*abs(queries[i][0]-points[j][0]));
                int y=(abs(queries[i][1]-points[j][1])*abs(queries[i][1]-points[j][1]));
                if(sqrt(x+y)<=queries[i][2])c++;
            }
            ans.push_back(c);
        }
        return ans;
    }
};