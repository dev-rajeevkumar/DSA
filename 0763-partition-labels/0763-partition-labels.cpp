class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> org(26, 0), f(26, 0), ans;
        for (char c : s)
            org[c - 'a']++;
        int z=0;
        for(int i=0;i<s.size();i++){
            f[s[i] - 'a']++;
            z++;
            int flag=1;
            for (int j = 0; j < 26; j++) {
                if (f[j] > 0 && f[j] != org[j]) {
                    flag=0;
                    break;
                }
            }
            if (flag) {
                ans.push_back(z);
                z = 0;
                fill(f.begin(), f.end(), 0);
            }
        }
        return ans;
    }
};