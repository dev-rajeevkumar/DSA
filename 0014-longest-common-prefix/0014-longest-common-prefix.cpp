class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int m=INT_MAX;
        for(int i=0;i<strs.size();i++){
            if(strs[i].size()<m)
                m=strs[i].size();
        }
        for(int i=0;i<m;i++){
            char ch=strs[0][i];
            int a=0;
            for(int j=0;j<strs.size();j++){
                if(strs[j][i]!=ch){
                    a=1;
                    break;
                }
            }
            if(a==1)
                break;
            ans+=ch;
        }
        return ans;
    }
};