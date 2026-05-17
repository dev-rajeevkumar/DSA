class Solution {
public:
    bool reach(vector<int>& arr,int s,vector<int>& vis){
        if(s < 0 || s >= arr.size())
            return false;
        if(arr[s]==0)
            return true;
        if(vis[s] == 1)
            return false;
        vis[s] = 1;
        bool left = reach(arr, s - arr[s], vis);
        bool right = reach(arr, s + arr[s], vis);
            return left || right;
    }
    bool canReach(vector<int>& arr, int start) {
       vector<int> vis(arr.size(), 0);
        return reach(arr,start,vis);
    }
};