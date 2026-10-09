class Solution {
public:
    int minInsertions(string s) {
        int c=0;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')c+=2;
            if(s[i]==')')c--;
            if(s[i]=='(' && c>0 && c%2==1){
                ans++;
                c--;
            }
            if(s[i]==')' && s[i+1]=='(' && c==-1){
                ans+=2;
                c=0;
            }
            if(c==-2){
                ans++;
                c=0;
            }
        }
        if(c<0)return ans+(2*abs(c));
        return ans+c;
    }
};