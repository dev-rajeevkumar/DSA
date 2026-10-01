class Solution {
public:
    int longestValidParentheses(string s) {
        int ans=0;
        int c=0;
        int valid=0;
        for(char x:s){
            if(x=='('){
                c++;
                valid++;
            }
            else{
                c--;
            }
            if(c==0){
                ans=max(ans,valid);
            }
            if(c<0){
                valid=0;
                c=0;
            }
        }
        reverse(s.begin(),s.end());
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')s[i]=')';
            else s[i]='(';
        }
        valid=0;
        c=0;
        for(char x:s){
            if(x=='('){
                c++;
                valid++;
            }
            else{
                c--;
            }
            if(c==0){
                ans=max(ans,valid);
            }
            if(c<0){
                valid=0;
                c=0;
            }
        }
        return ans*2;
    }
};