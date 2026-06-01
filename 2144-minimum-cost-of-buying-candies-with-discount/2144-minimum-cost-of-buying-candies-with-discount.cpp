class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int total=0;
        int t=1;
        sort(cost.begin(),cost.end());
        for(int i=cost.size()-1;i>=0;i--){
            if(t%3==0){
                t++;
                continue;
            }
            else{
                total+=cost[i];
                t++;
            }
        }
        return total;
    }
};