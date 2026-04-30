class Solution {
public:
int square(int n){
    int sum=0;
    while(n!=0){
        int r=n%10;
        sum=sum+r*r;
        n=n/10;
    }
        return sum;
    }
    bool isHappy(int n) {
        while(n!=1&&n!=7){
            if(n<10)
                return false;
            n=square(n);
        }

        return true;
    }
};