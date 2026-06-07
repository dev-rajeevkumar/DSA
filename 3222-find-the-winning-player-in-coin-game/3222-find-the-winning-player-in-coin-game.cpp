class Solution {
public:
    string winningPlayer(int x, int y) {
        int a=0;
        while(x>0 && y>3){
            a++;
            x--;
            y-=4;
        }
        if(a%2==0)
            return "Bob";
        return "Alice";
    }
};