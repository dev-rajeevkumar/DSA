class Solution {
public:
    int score(string s){
        if(s=="()")return 1;
        int ans=0;
        string x="";
        int c=0;
        for(int i=1;i<s.size()-1;i++){
            if(s[i]=='(')c++;
            else c--;
            x.push_back(s[i]);
            if(c==0){
                ans+=score(x);
                x="";
            }
        }
        return 2*ans;
    }
    int scoreOfParentheses(string s) {
        if(s=="()")return 1;
        int ans=score(s);
        int c=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='(')c++;
            else c--;
            if(c==1 && s[i]=='(' && s[i+1]==')'){
                ans++;
            }
        }
        return ans;
    }
};