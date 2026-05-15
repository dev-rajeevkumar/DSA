class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int a=coordinates[0]-96;
        int b=coordinates[1];
        return (a+b)%2;
    }
};