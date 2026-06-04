class Solution {
public:
    int reverseBits(int n) {
        string s(32,'0');
        for(int i=0;i<32;i++){
            if(n==1){
                s[i]='1';
                break;
            }
            s[i]=n%2+'0';
            n=n/2;
        }
        unsigned int ans=0,a=1;
        for(int i=31;i>0;i--){
            ans=ans+(a*int(s[i]-'0'));
            a=a*2;
        }
        return ans;
    }
};