class Solution {
public:
    int maxSumDistinctTriplet(vector<int>& x, vector<int>& y) {
        int n=x.size();
        vector<pair<int,int>> a;
        for(int i=0;i<n;i++){
            a.push_back({y[i],x[i]});
        }
        sort(a.rbegin(),a.rend());
        int ans=a[0].first;
        int k=1;
        set<int> id;
        id.insert(a[0].second);
        for(int i=1;i<n;i++){
            if(!id.count(a[i].second)){
                ans+=a[i].first;
                id.insert(a[i].second);
                k++;
            }
            if(k==3)return ans;
        }
        return -1;
    }
};