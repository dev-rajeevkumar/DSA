class Solution {
public:
    int mySqrt(int x) {
        long long max=0;
        for(long long i=0;i<=x;i++){
            if((i*i)==x){
                max=i;
                break;
            }
            if((i*i)>x){
                max=i-1;
                break;
            }
        }
        return max;
    }
};