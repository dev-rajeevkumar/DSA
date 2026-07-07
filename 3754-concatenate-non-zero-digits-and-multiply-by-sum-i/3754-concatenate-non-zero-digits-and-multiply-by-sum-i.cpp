class Solution {
public:
    long long sumAndMultiply(int n) {
        int ans=0;
        while(n>0){
            if(n%10!=0){
                ans=(ans*10)+n%10;
            }
            n/=10;
        }
        int a=0,sum=0;
        while(ans>0){
            a=(a*10)+ans%10;
            sum+=ans%10;
            ans/=10;
        }
        long long out=1LL*a*sum;
        return out;
    }
};