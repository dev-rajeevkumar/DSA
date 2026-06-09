class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int ans=0;
        int i=max(0,n-k);
        for(i;i<=n+k;i++){
            if((n&i)==0)
                ans+=i;
        }
        return ans;
    }
};