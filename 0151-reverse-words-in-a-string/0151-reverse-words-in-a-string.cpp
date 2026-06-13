class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        string t="";
        for(int i=0;i<s.size();i++){
        if(s[i]==' ' && t.size()==0)
            continue;
        if(s[i]==' ' && t.size()!=0){
            ans=t+" "+ans;
            t="";
            continue;
        }
        t+=s[i];
        }
        ans=t+" "+ans;
        ans.pop_back();
        if(ans[0]==' ')
            ans.erase(ans.begin());
        return ans;
    }
};