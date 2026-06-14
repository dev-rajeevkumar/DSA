class Solution {
public:
    int arrangeCoins(int n) {
        return (sqrt(8*(long long)n+1)-1)/2;
        // int i=1;
        // while(n-i>=0){
        //     n=n-i;
        //     i++;
        // }
        // return i-1;
    }
};