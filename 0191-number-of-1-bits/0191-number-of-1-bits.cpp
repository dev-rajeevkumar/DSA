class Solution {
public:
    int hammingWeight(int n) {
        int c=1;
        while(n!=1){
            c+=n%2;
            n=n/2;
        }
        return c;
    }
};