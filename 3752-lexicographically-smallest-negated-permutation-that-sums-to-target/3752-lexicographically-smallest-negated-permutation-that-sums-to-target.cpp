class Solution {
public:
    vector<int> lexSmallestNegatedPerm(int n, long long target) {
        vector<int> ans;
        long long sum=0;
        for(int i=1;i<=n;i++){
            sum+=i;
            ans.push_back(i);
        }
        for(int i=n-1;i>=0;i--){
            if((sum-ans[i]*2)>=target){
                sum=sum-(1LL*ans[i]*2);
                ans[i]=-ans[i];
            }
            if(sum==target)break;
        }
        if(sum!=target)return {};
        vector<int> res;
        for(int i=n-1;i>=0;i--){
            if(ans[i]<0)
                res.push_back(ans[i]);
        }
        for(int i=0;i<n;i++){
            if(ans[i]>0)
                res.push_back(ans[i]);
        }
        return res;
    }
};