class Solution {
public:
    int maximumLengthSubstring(string s) {
    vector<int> a(26,0);
    int pointer=0;
    int len=0;
    for(int i=0;i<s.size();i++) {
        a[s[i]-'a']++;
        while(a[s[i]-'a']>2) {
            a[s[pointer]-'a']--;
            pointer++;
        }
        len=max(len,i-pointer+1);
    }
    return len;
    }
};