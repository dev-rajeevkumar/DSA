class Solution {
public:
    bool isSubsequence(string s, string t) {
        int a=0;
        for(int i=0;i<t.size();i++){
            if(t[i]==s[a]){
                a++;
            }
            if(a==s.size())
            return true;
        }
        return false;
    }
    int numMatchingSubseq(string s, vector<string>& words) {
        int ans=0;
        sort(words.begin(),words.end());
        int c=1;
        for(int i=0;i<words.size()-1;i++){
            if(words[i]==words[i+1]){
                c++;
                continue;
            }
            if(isSubsequence(words[i],s)){
                ans+=c;
                c=1;
            }
        }
        if(isSubsequence(words.back(),s))ans+=c;
        return ans;
    }
};