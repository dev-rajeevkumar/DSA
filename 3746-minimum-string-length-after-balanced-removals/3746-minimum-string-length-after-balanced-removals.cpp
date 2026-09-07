class Solution {
public:
    int minLengthAfterRemovals(string s) {
        string ans="";
        for(int i=0;i<s.size();i++){
            if(ans.size()==0){
                ans.push_back(s[i]);
                continue;
            }
            if(ans.back()==s[i])ans.push_back(s[i]);
            else ans.pop_back();
        }
        return ans.size();
    }
};