class Solution {
public:
    bool canAliceWin(int n) {
        return ((9<n&&n<=18)||(26<n&&n<=33)||(39<n&&n<=44)||(48<n));
        // int flag=1;
        // int x=10;
        // while(n>=0){
        //     n-=x;
        //     x--;
        //     flag^=1;
        // }
        // return flag;
    }
};