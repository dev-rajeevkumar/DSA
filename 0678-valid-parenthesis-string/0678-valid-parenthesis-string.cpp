class Solution {
public:
    bool checkValidString(string s) {
        if(s[0]==')'||s.back()=='(')return false;
        int l=0,r=0,c=0;
        for(char x:s){
            if(x=='*')c++;
            if(x=='(')l++;
            if(x==')'){
                if(l>0)l--;
                else if(c>0)c--;
                else return false;
            }
        }
        if(l>c)return false;
        l=0,r=0,c=0;
        for(int i=s.size()-1;i>=0;i--){
            char x=s[i];
            if(x=='*')c++;
            if(x==')')l++;
            if(x=='('){
                if(l>0)l--;
                else if(c>0)c--;
                else return false;
            }
        }
        if(l>c)return false;
        return true;
    }
};