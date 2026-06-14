class Solution {
public:
    int integerBreak(int n) {
        if(n<4) return n-1;
        // int ans=1;
        // while(n>4){
        //     ans*=3;
        //     n-=3;
        // }
        // ans=ans*n;
        // return ans;
        if(n%3==0) return pow(3,n/3);
        if(n%3==1) return pow(3,(n/3)-1) *4;
        return pow(3,n/3)*(n%3);
    }
};