class Solution {
public:
bool good(int a){
    int org=a;
    int r=0;
    int i=1;
    while(a!=0){
        int d=a%10;
        if(d==3||d==4||d==7)
            return false;
        if(d==5)
            r=r+i*2;
        if(d==2)
            r=r+i*5;
        if(d==6)
            r=r+i*9;
        if(d==9)
            r=r+6*i;
        else
            r=r+d*i;
        i=i*10;
        a=a/10;
    }
    if(r==org)
        return false;
    return true;
}
    int rotatedDigits(int n) {
        int count=0;
        for(int i=1;i<=n;i++){
            if(good(i))
                count++;
        }
        return count;
    }
};