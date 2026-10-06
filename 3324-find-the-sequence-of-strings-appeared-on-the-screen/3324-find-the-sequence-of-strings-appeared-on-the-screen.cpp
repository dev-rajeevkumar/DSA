class Solution {
public:
    vector<string> stringSequence(string target) {
        vector<string> ans;
        string s="";
        for(int i=0;i<target.size();i++){
            s.push_back('a');
            ans.push_back(s);
            while(s[i]!=target[i]){
                s[i]=char(s[i]+1);
                ans.push_back(s);
            }
        }
        return ans;
    }
};