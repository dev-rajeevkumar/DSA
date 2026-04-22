class Solution {
public:
    int trailingZeroes(int n) {
        int a=(n/5)+(n/25)+(n/125)+(n/625)+(n/3125);
        return a;
    }
};