class Solution {
public:
    bool sub(string s, string t) {
        int a=0;
        for(int i=0;i<t.size();i++){
            if(t[i]==s[a]){
                a++;
            }
        }
        if(a==s.size())
            return true;
        return false;
    }
    string findLongestWord(string s, vector<string>& dictionary) {
        sort(dictionary.begin(),dictionary.end());
        int maxi=0;
        string ans="";
        for(int i=0;i<dictionary.size();i++){
            if(sub(dictionary[i],s)){
                if(dictionary[i].size()>maxi){
                    maxi=dictionary[i].size();
                    ans=dictionary[i];
                }
            }
        }
        return ans;
    }
};