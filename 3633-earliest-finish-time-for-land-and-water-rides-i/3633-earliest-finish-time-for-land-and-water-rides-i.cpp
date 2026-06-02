class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        vector<int> sumland;
        vector<int> sumwater;
        int watermin=INT_MAX,landmin=INT_MAX;
        int ans=0;
        for(int i=0;i<landDuration.size();i++){
            sumland.push_back(landStartTime[i]+landDuration[i]);
            if(sumland[i]<landmin)
                landmin=sumland[i];
        }
        for(int i=0;i<waterDuration.size();i++){
            sumwater.push_back(waterStartTime[i]+waterDuration[i]);
            if(sumwater[i]<watermin)
                watermin=sumwater[i];
        }
        // for watermin 
        int ma=INT_MAX,mb=INT_MAX;
        for(int i=0;i<landDuration.size();i++){
            int a=0;
            if(landStartTime[i]>watermin)
                a=landStartTime[i]+landDuration[i];
            else
                a=watermin+landDuration[i];
            if(a<ma)
                ma=a;
        }
        // for landmin
        for(int i=0;i<waterDuration.size();i++){
            int b=0;
            if(waterStartTime[i]>landmin)
                b=waterStartTime[i]+waterDuration[i];
            else
                b=landmin+waterDuration[i];
            if(b<mb)
                mb=b;
        }
        ans=min(ma,mb);
        return ans;
    }
};