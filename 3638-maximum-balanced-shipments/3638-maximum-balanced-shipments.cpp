class Solution {
public:
    int maxBalancedShipments(vector<int>& weight) {
        int ans=0;
        for(int i=1;i<weight.size();i++){
            if(weight[i-1]>weight[i]){
                ans++;
                i++;
            }
        }
        return ans;
    }
};