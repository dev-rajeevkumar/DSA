class Solution {
public:
    int countCommas(int n) {
        if(n<1000)return 0;
        int x=n/1000;
        x--;
        return ((x*1000)+n%1000)+1;
    }
};