class Solution {
public:
    bool isDigitorialPermutation(int n) {
        vector<int> fact(10,0);
        fact[0]=1;
        for(int i=1;i<10;i++)fact[i]=fact[i-1]*i;
        int org=n;
        long long num=0;
        while(n>0){
            num+=fact[n%10];
            n/=10;
        }
        vector<int> fn(10,0);
        while(org>0){
            fn[(org%10)]++;
            org/=10;
        }
        vector<int> fans(10,0);
        while(num>0){
            fans[(num%10)]++;
            num/=10;
        }
        return fn==fans;
    }
};