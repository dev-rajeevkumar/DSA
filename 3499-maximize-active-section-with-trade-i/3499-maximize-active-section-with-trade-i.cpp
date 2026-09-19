class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int c=0,one=0,maxi=0,a=0,b=0,i=0;
        for(char x:s)if(x=='1')one++;
        for(i;i<s.size();i++){
            if(s[i]=='0')a++;
            else if(a>0&&s[i]=='1'){
                c++;
                break;
            }
        }
        if(c==0&&a>0)c=1;
        for(i;i<s.size();i++){
            if(s[i]=='0')b++;
            else{
                if(b>0){
                    maxi=max(maxi,a+b);
                    c++;
                    a=b;
                }
                b=0;
            }
        }
        if(b>0){
            maxi=max(maxi,a+b);
            c++;
        }
        if(c==0)return s.size();
        if(c==1)return s.size()-a;
        return one+maxi;
    }
};