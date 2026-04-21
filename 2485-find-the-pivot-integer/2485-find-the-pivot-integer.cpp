class Solution {
public:
    int pivotInteger(int n) {
        for(int i=1;i<=n;i++){
            int x=i;
            int s1=0,s2=0;
            for(int j=1;j<=x;j++){
                s1=s1+j;
            }
            for(int j=x;j<=n;j++){
                s2=s2+j;
            }
            if(s1==s2){
                return x;
            }
        }
        return -1;
    }
};