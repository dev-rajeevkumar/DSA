class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
    sort(intervals.begin(),intervals.end());
    for(int i=0;i<intervals.size();i++){
        if(i-1>=0){
            if(intervals[i-1][0]<=intervals[i][0] && intervals[i][1]<=intervals[i-1][1]){
                intervals.erase(intervals.begin()+i);
                i--;
                continue;
            }
        }
        if(i+1<intervals.size()){
            if(intervals[i+1][0]<=intervals[i][0] && intervals[i][1]<=intervals[i+1][1]){
                intervals.erase(intervals.begin()+i);
                i--;
                continue;
            }
        }
    } 
    return intervals.size();  
    }
};