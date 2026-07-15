class Solution {
public:
    bool nice(string &s, int l, int r) {
        vector<int> up(26, 0), low(26, 0);
        for (int i = l; i <= r; i++) {
            if (isupper(s[i]))
                up[s[i] - 'A'] = 1;
            else
                low[s[i] - 'a'] = 1;
        }
        for (int i = 0; i < 26; i++) {
            if (up[i] != low[i]) return false;
        }
        return true;
    }
    string longestNiceSubstring(string s) {
        int n = s.size();
        for (int len = n; len >= 2; len--) {
            for (int i = 0; i + len <= n; i++) {
                if (nice(s, i, i + len - 1))
                    return s.substr(i, len);
            }
        }

        return "";
    }
};