class Solution {
public:
    bool hasMatch(string s, string p) {
        string p1="",p2="";
        int flag=1;
        for(int i=0;i<p.size();i++){
            if(p[i]=='*'){
                flag=0;
                continue;
            }
            if(flag==1)p1.push_back(p[i]);
            else p2.push_back(p[i]);
        }
        int i;
        flag=1;
        for(i=0;i<s.size();i++){
            if(s.substr(i,p1.size())==p1){
                i=i+p1.size();
                flag=0;
                break;
            }
        }
        if(flag)return false;
        if(p2.size()==0)return true;
        for(i;i<s.size();i++){
            if(s.substr(i,p2.size())==p2){
                return true;
            }
        }
        return false;
    }
};