class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num1=(n*(n+1))/2;
        n=n/m;
        int num2=m*(n*(n+1))/2;
        return num1-num2-num2;
    }
};