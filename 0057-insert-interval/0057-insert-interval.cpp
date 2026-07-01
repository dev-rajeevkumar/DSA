class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        if(intervals.size()==0) return {newInterval};
        int x=0;
        while(x<intervals.size()){
            if(intervals[x][0]>=newInterval[0]){
                break;
            }
            x++;
        }
        intervals.insert(intervals.begin()+x,newInterval);
        vector<vector<int>> ans;
        ans.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<=ans[ans.size()-1][1]){
                ans[ans.size()-1][1]=max(intervals[i][1],ans[ans.size()-1][1]);
            }
            else
                 ans.push_back(intervals[i]);
        }
        return ans;
    }
};