class Solution {
public:
    bool have(string &s, char c){
        for(char x : s){
            if(x == c) return true;
        }
        return false;
    }
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        vector<string> f(26);
        for (int i = 0; i < s1.size(); i++) {
            char x = min(s1[i], s2[i]);
            if(!have(f[s1[i] - 'a'],s1[i]))f[s1[i] - 'a'].push_back(s1[i]);
            if(!have(f[s1[i] - 'a'],s2[i]))f[s1[i] - 'a'].push_back(s2[i]);
            if(!have(f[s2[i] - 'a'],s1[i]))f[s2[i] - 'a'].push_back(s1[i]);
            if(!have(f[s2[i] - 'a'],s2[i]))f[s2[i] - 'a'].push_back(s2[i]);
            for(int j=0;j<26;j++){
                if(have(f[j], s1[i]) || have(f[j], s2[i])){
                    for(int k=0;k<f[j].size();k++){
                        int id = f[j][k] - 'a';
                        for(char c : f[id]){
                            if(!have(f[j], c))
                                f[j].push_back(c);
                        }
                    }
                }
            }
        }
        for (int i = 0; i < 26; i++) {
            if (f[i].empty()) continue;
            sort(f[i].begin(), f[i].end());
            f[i] = f[i][0];
        }
        for (int i = 0; i < baseStr.size(); i++) {
            int x = baseStr[i] - 'a';
            if (!f[x].empty() && f[x][0] < baseStr[i]) {
                baseStr[i] = f[x][0];
            }
        }
        return baseStr;
    }
};