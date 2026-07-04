class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        int ans=INT_MAX;
        sort(roads.begin(),roads.end());
        set<int> node;
        node.insert(1);
        node.insert(n);
        while(1){
            int x=node.size();
            for(int i=0;i<roads.size();i++){
                if(node.find(roads[i][1]) != node.end())node.insert(roads[i][0]);
                if(node.find(roads[i][0]) != node.end())node.insert(roads[i][1]);
            }
            if(x==node.size())break;
        }
        for(int i=0;i<roads.size();i++){
            if((node.find(roads[i][0]) != node.end())||(node.find(roads[i][1]) != node.end())){
                if(roads[i][2]<ans)ans=roads[i][2];
            }
        }
        return ans;
    }
};