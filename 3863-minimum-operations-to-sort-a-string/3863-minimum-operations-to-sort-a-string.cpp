class Solution {
public:
    int minOperations(string s) {
        if(s.size()==2 && s[0]>s[1])return -1;
        char mini='z',maxi='a';
        int flag=1;
        char c=s[0];
        for(char x:s){
            if(x<mini)mini=x;
            if(x>maxi)maxi=x;
            if(x<c)flag=0;
            c=x;
        }
        if(flag)return 0;
        int minicount=0,maxicount=0;
        for(char x:s){
            if(x==mini)minicount++;
            if(x==maxi)maxicount++;
        }
        if(s[0]==mini || s.back()==maxi)return 1;
        if(s[0]==maxi && s.back()==mini && minicount==1 && maxicount==1)return 3;
        if(s[0]!=mini && s.back()!=maxi)return 2;
        return 0;
    }
};