class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) {
        vector<vector<int>> ans;
        for(int i=0;i<towers.size();i++){
            int d=abs(towers[i][0]-center[0])+abs(towers[i][1]-center[1]);
            if(d<=radius){
                if(ans.empty()){
                    ans.push_back({towers[i][2],towers[i][0],towers[i][1]});
                }
                else if(towers[i][2]>ans[0][0]){
                    ans.clear();
                    ans.push_back({towers[i][2],towers[i][0],towers[i][1]});
                }
                else if(towers[i][2]==ans[0][0]){
                    ans.push_back({towers[i][2],towers[i][0],towers[i][1]});
                }
            }
        }
        if(ans.size()==0)return {-1,-1};
        sort(ans.begin(),ans.end());
        return {ans[0][1],ans[0][2]};
    }
};