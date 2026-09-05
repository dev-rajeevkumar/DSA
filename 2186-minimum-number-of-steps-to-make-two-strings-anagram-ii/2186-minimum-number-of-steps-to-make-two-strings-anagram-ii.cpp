class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> fs(26,0),ft(26,0);
        for(char x:s)fs[x-'a']++;
        for(char x:t)ft[x-'a']++;
        int ans=0;
        for(int i=0;i<26;i++) ans+=abs(fs[i]-ft[i]);
        return ans;
    }
};