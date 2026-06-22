class Solution {
public:
    long long f(long long n) {
        long long a=(n/5)+(n/25)+(n/125)+(n/625)+(n/3125)+(n/15625)+(n/78125)+(n/390625)+(n/1953125)+(n/9765625)+(n/48828125)+(n/244140625)+(n/1220703125);
        return a;
    }
    int preimageSizeFZF(int k) {
        long n=0,x=k;
        n=n+(x*4);
        // if(k>510000000) return 5;
        while(f(n)<=k){
            if(f(n)==k){
                return 5;
            }
            n=n+5;
        }
        return 0;
    }
};