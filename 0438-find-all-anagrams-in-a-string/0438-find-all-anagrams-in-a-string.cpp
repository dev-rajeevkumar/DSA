class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(s.size() < p.size())
            return {};
        int n=p.size();
        vector<int> ans;
        vector<int> fres(26,0);
        vector<int> frep(26,0);
        for(int i=0;i<n;i++){
            fres[s[i]-'a']++;
            frep[p[i]-'a']++;
        }
        if(fres==frep)
            ans.push_back(0);
        for(int i=n;i<s.size();i++){
            fres[s[i]-'a']++;
            fres[s[i-n]-'a']--;
            if(fres==frep){
                ans.push_back(i-n+1);
            }
        }
        return ans;
    }
};