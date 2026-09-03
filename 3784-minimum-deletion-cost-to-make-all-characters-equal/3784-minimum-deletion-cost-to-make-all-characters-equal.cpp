class Solution {
public:
    long long minCost(string s, vector<int>& cost) {
        vector<long long> ans(26,0);
        for(int i=0;i<26;i++){
            char x=char(i+'a');
            long long sum=0;
            for(int j=0;j<s.size();j++){
                if(s[j]!=x)sum+=cost[j];
            }
            ans[i]=sum;
        }
        long long out=ans[0];
        for(long long x:ans)out=min(out,x);
        return out;
    }
};