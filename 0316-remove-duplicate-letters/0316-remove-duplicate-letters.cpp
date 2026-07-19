class Solution {
public:
    bool check(string &s, string &u, int n){
    vector<int> f(26);
    for(int i=n;i<s.size();i++)
        f[s[i]-'a']++;

    for(char c : u){
        if(f[c-'a']==0)
            return false;
    }
    return true;
    }
    string removeDuplicateLetters(string s) {
        string u;
        vector<int> f(26);
        string ans="";
        for(char c:s)f[c-'a']++;
        for(int i=0;i<26;i++)
            if(f[i])u+=char(i+'a');
        while(u.size()>0){
            for(int i=0;i<u.size();i++){
                int flag=0;
                for(int j=0;j<s.size();j++){
                    if(s[j]==u[i] && check(s,u,j)){
                        ans.push_back(u[i]);
                        u.erase(i,1);
                        s=s.substr(j+1,s.size()-j);
                        flag=1;
                        break;
                    }
                }
                if(flag==1)break;
            }
        }
        return ans;
    }
};