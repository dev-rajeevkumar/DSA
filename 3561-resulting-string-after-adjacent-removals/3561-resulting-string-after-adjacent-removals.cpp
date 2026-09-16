class Solution {
public:
    string resultingString(string s) {
        string ans="";
        for(char c:s){
            if(ans.size()==0){
                ans.push_back(c);
                continue;
            }
            int l=c-1,r=c+1;
            if(l<'a')l+=26;
            if(r>'z')r-=26;
            if(ans.back()==char(l) || ans.back()==char(r))
                ans.pop_back();
            else ans.push_back(c);
        }
        return ans;
    }
};