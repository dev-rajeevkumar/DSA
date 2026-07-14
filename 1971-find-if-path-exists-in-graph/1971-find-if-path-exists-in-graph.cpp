class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        set<int> num;
        sort(edges.begin(),edges.end());
        num.insert(source);
        while(1){
            int n=num.size();
            for(int i=0;i<edges.size();i++){
                if(num.count(edges[i][0]))num.insert(edges[i][1]);
                else if(num.count(edges[i][1]))num.insert(edges[i][0]);
            }
            if(n==num.size())break;
            if(num.count(destination))return true;
        }
        return num.count(destination);
    }
};