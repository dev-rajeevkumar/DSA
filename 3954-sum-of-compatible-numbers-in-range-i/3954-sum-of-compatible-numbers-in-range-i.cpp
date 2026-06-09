class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int ans=0;
        int i=n-k;
        if(i<0)
            i=0;
        for(i;i<=n+k;i++){
            if((n&i)==0)
                ans+=i;
        }
        return ans;
    }
};