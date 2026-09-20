class Solution {
public:
    string findValidPair(string s) {
        vector<int> num(10,0);
        for(char c:s)num[c-'0']++;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]!=s[i+1] && num[s[i]-'0']==s[i]-'0' && num[s[i+1]-'0']==s[i+1]-'0')return string(1,s[i])+s[i+1];
        }
        return "";
    }
};