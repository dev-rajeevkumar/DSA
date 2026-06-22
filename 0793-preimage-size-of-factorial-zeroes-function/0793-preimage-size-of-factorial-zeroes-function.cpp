class Solution {
public:
    long long f(long long n) {
        return (n/5)+(n/25)+(n/125)+(n/625)+(n/3125)+(n/15625)+(n/78125)+(n/390625)+(n/1953125)+(n/9765625)+(n/48828125)+(n/244140625)+(n/1220703125);
    }
    int preimageSizeFZF(int k) {
        long x=k;
        long n=(x*4);
        while(f(n)<=k){
            if(f(n)==k){
                return 5;
            }
            n=n+5;
        }
        return 0;
    }
};