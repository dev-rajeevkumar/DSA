class Solution {
public:
    bool isValid(string s) {
        string t="";
        for(char x:s){
            if(x=='(' || x=='{' || x=='['){
                t.push_back(x);
                continue;
            }
            if(x==')' && t.size()>0 && t[t.size()-1]=='('){
                t.pop_back();
                continue;
            }
            if(x==']' && t.size()>0 && t[t.size()-1]=='['){
                t.pop_back();
                continue;
            }
            if(x=='}' && t.size()>0 && t[t.size()-1]=='{'){
                t.pop_back();
                continue;
            }
            return false;
        }
        if(t.size()>0) return false;
        return true;
    }
};