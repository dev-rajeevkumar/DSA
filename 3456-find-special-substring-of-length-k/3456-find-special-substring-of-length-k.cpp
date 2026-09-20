class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
        int c=1;
        for(int i=1;i<s.size();i++){
            if(s[i-1]==s[i])c++;
            else{
                if(c==k)return true;
                c=1;
            }
        }
        if(c==k)return true;
        return false;
    }
};