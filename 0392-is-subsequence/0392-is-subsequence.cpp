class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()==0)
            return true;
        int j=0;
        string temp="";
        for(int i=0;i<s.size();i++){
            for(j;j<t.size();j++){
                if(s[i]==t[j]){
                    temp.push_back(t[j]);
                    j++;
                    break;
                }
                    
            }
        }
        if(s==temp)
            return true;
        return false;
    }
};