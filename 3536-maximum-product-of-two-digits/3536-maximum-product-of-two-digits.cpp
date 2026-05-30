class Solution {
public:
    int maxProduct(int n) {
        vector<int> ans;
        while(n!=0){
            int d=n%10;
            ans.push_back(d);
            n=n/10;
        }
        int a=ans.size();
        sort(ans.begin(),ans.end());
        int max=ans[a-1]*ans[a-2];
        return max;
    }
};