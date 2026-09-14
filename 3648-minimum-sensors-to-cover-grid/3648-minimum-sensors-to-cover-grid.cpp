class Solution {
public:
    int minSensors(int n, int m, int k) {
        int x=k*2 +1;
        int a1=(n+x-1)/x;
        int a2=(m+x-1)/x;
        return a1*a2;
    }
};