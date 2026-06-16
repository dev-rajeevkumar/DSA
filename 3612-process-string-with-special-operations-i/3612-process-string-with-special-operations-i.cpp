class Solution {
public:
string reverse(string a){
    int i=0;
    int j=a.size()-1;
    while(i<j){
        swap(a[i],a[j]);
        i++;
        j--;
    }
    return a;
}
    string processStr(string s) {
        string ans="";
        for(int i=0;i<s.size();i++){
            if(islower(s[i])){
                ans+=s[i];
                continue;
            }
            if(s[i]=='*' && ans.size()>0){
                ans.pop_back();
                continue;
            }
            if(s[i]=='#'){
                ans=ans+ans;
                continue;
            }
            if(s[i]=='%'){
                ans=reverse(ans);
                continue;
            }
        }
        return ans;
    }
};