class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
    sort(intervals.begin(),intervals.end());
    for(int i=0;i<intervals.size();i++){
        for(int j=0;j<intervals.size();j++){
            if(i==j)continue;
            if(intervals[j][0]<=intervals[i][0] && intervals[i][1]<=intervals[j][1]){
                intervals.erase(intervals.begin()+i);
                i--;
                continue;
            }
        }
    } 
    return intervals.size();  
    }
};