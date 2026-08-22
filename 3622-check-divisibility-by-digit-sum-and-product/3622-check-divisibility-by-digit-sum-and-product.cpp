class Solution {
public:
    bool checkDivisibility(int n) {
        int num=n;
        int sum=0;
        int product=1;
        while(num>0){
            int x=num%10;
            sum+=x;
            product*=x;
            num/=10;
        }
        return !(n%(sum+product));
    }
};