class Solution {
public:
    bool isSubsequence(string s, string t) {
        int a=0;
        for(int i=0;i<t.size();i++){
            if(t[i]==s[a])a++;
        } 
    if(a==s.size()) return true;
    return false;
    }
    vector<pair<char,int>> make(string s){
        vector<pair<char,int>> v;
        for(int i=0;i<s.size();){
            char c=s[i];
            int cnt=0;
            while(i<s.size() && s[i]==c){
                cnt++;
                i++;
            }
            v.push_back({c,cnt});
        }
        return v;
    }
    int expressiveWords(string s, vector<string>& words) {
        int ans=0;
        vector<pair<char,int>> sf=make(s);
        for(string w:words){
            if(!isSubsequence(w,s))continue;
            vector<pair<char,int>> wf=make(w);
            if(sf.size()!=wf.size()) continue;
            bool ok=true;
            for(int i=0;i<sf.size();i++){
                if(sf[i].second<3 && sf[i].second!=wf[i].second){
                    ok=false;
                    break;
                }
            }
            if(ok)ans++;
        }
        return ans;
    }
};