class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) {
        vector<vector<int>> ans;
        sort(towers.begin(),towers.end());
        for(int i=0;i<towers.size();i++){
            int d=abs(towers[i][0]-center[0])+abs(towers[i][1]-center[1]);
            if(d<=radius)
                ans.push_back({towers[i][2],towers[i][0],towers[i][1]});
        }
        if(ans.size()==0)return {-1,-1};
        sort(ans.rbegin(),ans.rend());
        int qf=ans[0][0];
        vector<vector<int>> ans2;
        for(int i=0;i<ans.size();i++){
            if(ans[i][0]==qf){
                ans2.push_back({ans[i][1],ans[i][2]});
            }
        }
        sort(ans2.begin(),ans2.end());
        return ans2[0];
    }
};