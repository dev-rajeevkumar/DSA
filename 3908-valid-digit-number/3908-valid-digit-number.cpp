class Solution {
public:
    bool validDigit(int n, int x) {
        int c=0;
        while(n>=10){
            if(n%10==x) c=1;
            n/=10;
        }
        if(c==0 || n==x) return false;
        return true;
    }
};