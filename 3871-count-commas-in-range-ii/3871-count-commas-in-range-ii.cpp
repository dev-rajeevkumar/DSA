class Solution {
public:
    long long countCommas(long long n) {
        if(n<1000)return 0;
        long long ans=0;
        long long x=max(1LL*0,n-999);
        ans+=x;
        x=max(0LL,n-999999);
        ans+=x;
        x=max(0LL,n-999999999);
        ans+=x;
        x=max(0LL,n-999999999999);
        ans+=x;
        x=max(0LL,n-999999999999999);
        ans+=x;
        return ans;
    }
};