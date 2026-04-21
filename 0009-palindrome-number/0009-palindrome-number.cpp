class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

    long long p = 0;
    int n = x;

    while (n != 0) {
        int r = n % 10;
        p = p * 10 + r;
        n /= 10;
    }

    return p == x;
    }
};