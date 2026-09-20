class Solution {
public:
    bool check(vector<int>& temp1, vector<int>& temp2) {
        for(int i = 0; i < 26; i++) {
            if(temp2[i] > 0 && temp2[i] != temp1[i])
                return false;
        }
        return true;
    }
    bool maxSubstringLength(string s, int k) {
        vector<string> ans;
        vector<int> f(26,0);
        for(int i=0;i<s.size();i++)f[s[i]-'a']++;
        vector<int> temp(26,0);
        int limit=0;
        for(int i=0;i<s.size();i++){
            temp[s[i]-'a']++;
            if(temp[s[i]-'a']==f[s[i]-'a']){
                string z="";
                vector<int> temp2(26,0);
                for(int j=i;j>=limit;j--){
                    z.push_back(s[j]);
                    temp2[s[j]-'a']++;
                    if(check(f,temp2)){
                        reverse(z.begin(),z.end());
                        if(z!=s){
                            ans.push_back(z);
                        }
                        limit=i+1;
                        break;
                    }
                }
                continue;
            }
        }
        if(ans.size()>=k)return true;
        return false;
    }
};