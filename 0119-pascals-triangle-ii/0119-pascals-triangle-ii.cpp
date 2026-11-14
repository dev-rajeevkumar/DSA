class Solution {
public:
    vector<int> getRow(int row) {
        if(row==0)return {1};
        vector<int> a={1,1};
        row--;
        while(row--){
            int n=a.size();
            vector<int> ans(n+1,1);
            for(int i=1;i<n;i++){
                ans[i]=a[i-1]+a[i];
            }
            a=ans;
        }
        return a;
    }
};