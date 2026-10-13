class Solution {
public:
double distance(vector<int>& p1,vector<int>& p2){
    int dx=p1[0]-p2[0];
    int dy=p1[1]-p2[1];
    return sqrt(1LL*dx*dx + 1LL*dy*dy);
}
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        vector<double> dist;
        dist.push_back(distance(p1,p2));
        dist.push_back(distance(p1,p3));
        dist.push_back(distance(p1,p4));
        dist.push_back(distance(p2,p3));
        dist.push_back(distance(p2,p4));
        dist.push_back(distance(p3,p4));
        sort(dist.begin(),dist.end());
        if(dist[0]==0)return false;
        if(dist[0]==dist[1] && dist[1]==dist[2] && dist[2]==dist[3] && dist[4]==dist[5])return true;
        return false;
    }
};