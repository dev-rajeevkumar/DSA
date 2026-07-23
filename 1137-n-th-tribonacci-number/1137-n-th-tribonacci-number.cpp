class Solution {
public:
    int tribonacci(int n) {
        int a=0,b=1,c=1,d=2;
        if(n<2)return n;
        if(n==2)return 1;
        n=n-2;
        while(n>0){
            d=a+b+c;
            a=b;
            b=c;
            c=d;
            n--;
        }
        return d;
    }
};
