class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        vector<int> freqs(26,0);
        vector<int> freqt(26,0);
        for(int i=0;i<s.size();i++){
            freqs[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++){
            freqt[t[i]-'a']++;
        }
        if(freqs==freqt)
            return true;
        return false;
        // for(int i=0;i<s.size();i++){
        //     for(int j=0;j<t.size();j++){
        //         if(s[i]==t[j]){
        //             t.erase(j, 1);
        //             break;
        //         }
        //     }
        // }
        // if(t.size()==0)
        //     return true;
        // return false;
    }
};