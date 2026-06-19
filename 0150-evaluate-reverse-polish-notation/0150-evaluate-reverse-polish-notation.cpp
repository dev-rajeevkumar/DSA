class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> s;
        for(int i=0;i<tokens.size();i++){
           if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="*" && tokens[i]!="/"){
            s.push_back(stoi(tokens[i]));
            continue;
           }
            if(tokens[i]=="+"){
                int n1=s[s.size()-1];
                s.pop_back();
                int n2=s[s.size()-1];
                s[s.size()-1]=n2+n1;
            }
            if(tokens[i]=="-"){
               int n1=s[s.size()-1];
                s.pop_back();
                int n2=s[s.size()-1];
                s[s.size()-1]=n2-n1;
            }
            if(tokens[i]=="*"){
                int n1=s[s.size()-1];
                s.pop_back();
                int n2=s[s.size()-1];
                s[s.size()-1]=n2*n1;
            }
            if(tokens[i]=="/"){
                int n1=s[s.size()-1];
                s.pop_back();
                int n2=s[s.size()-1];
                s[s.size()-1]=n2/n1;
            }
        }
        return s[0];
    }
};