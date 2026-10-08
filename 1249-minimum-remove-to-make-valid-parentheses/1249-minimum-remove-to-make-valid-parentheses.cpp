class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string ans="";
        int c=0;
        for(char x:s){
            if(islower(x)){
                ans.push_back(x);
                continue;
            }
            if(x=='(')c++;
            if(x==')')c--;
            if(c>=0)ans.push_back(x);
            if(c<0)c=0;
        }
        s="";
        c=0;
        for(int i=ans.size()-1;i>=0;i--){
            char x=ans[i];
            if(islower(x)){
                s.push_back(x);
                continue;
            }
            if(x==')')c++;
            if(x=='(')c--;
            if(c>=0)s.push_back(x);
            if(c<0)c=0;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};