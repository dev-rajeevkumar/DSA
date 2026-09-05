class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        int count=0;
        int i;
        for(i=0;i<s.size();i++){
            if(s[i]==' ')break;
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')count++;
            ans.push_back(s[i]);
        }
        int c=0;
        string x="";
        for(i;i<s.size();i++){
            if(s[i]==' '){
                if(c==count) reverse(x.begin(),x.end());
                ans+=x;
                ans.push_back(' ');
                x="";
                c=0;
                continue;
            }
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')c++;
            x.push_back(s[i]);
        }

        if(count==c){
            reverse(x.begin(),x.end());
            ans+=x;
        }
        else ans+=x;
        return ans;
    }
};