class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        set<string> st(words.begin(), words.end());
        words.assign(st.begin(), st.end());
        int ans = words.size();
        for (string &x : words)
            ans += x.size();
        for (int i = 0; i < words.size(); i++) {
            for (int j = 0; j < words.size(); j++) {
                if (i == j) continue;
                if (words[j].size() < words[i].size()) continue;
                int k = words[j].size() - words[i].size();
                if(words[j].compare(k, words[i].size(), words[i]) == 0) {
                    ans -= words[i].size() + 1;
                    break;
                }
            }
        }
        return ans;
    }
};