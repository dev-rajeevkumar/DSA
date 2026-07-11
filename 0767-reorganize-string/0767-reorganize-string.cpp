class Solution {
public:
    string reorganizeString(string s) {
        vector<pair<int,char>> v;
        vector<int> f(26,0);
        for(char c:s) f[c-'a']++;
        for(int i=0;i<26;i++){
            if(f[i]) v.push_back({f[i],char(i+'a')});
        }
        sort(v.begin(),v.end(),greater<pair<int,char>>());
        string ans="";
        while(v.size()>1 && v[1].first>0){
            for(int i=0;i<v.size();i++){
                if(v[i].first==0) break;
                ans.push_back(v[i].second);
                v[i].first--;
            }
        }
        int z = v[0].first;
        char x = v[0].second;
        if(z==0) return ans;
        if(ans.size()==0 || ans[0]!=x){
            ans.insert(ans.begin(),x);
            z--;
        }
        if(z==0) return ans;
        for(int i=1;i<ans.size();i++){
            if(ans[i]!=x &&ans[i-1]!=x){
                ans.insert(ans.begin()+i,x);
                i++;
                z--;
            }
            if(z==0)return ans;
        }
        if(z && ans.size()>0 && ans.back()!=x){
            ans.push_back(x);
            z--;
        }
        if(z) return "";
        return ans;
    }
};