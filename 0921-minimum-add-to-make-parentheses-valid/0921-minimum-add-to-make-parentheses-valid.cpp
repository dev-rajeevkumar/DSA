class Solution {
public:
    int minAddToMakeValid(string s) {
        int ans=0;
        int c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')c++;
            else c--;
            if(c<0){
                ans++;
                c=0;
            }
        }
        c=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==')')c++;
            else c--;
            if(c<0){
                ans++;
                c=0;
            }
        }
        return ans;
    }
};