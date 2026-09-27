class Solution {
public:
    string reverseParentheses(string s) {
        string ans="";
        for(int c:s){
            if(c==')'){
                string x="";
                // for(int i=ans.size()-1;i>=0;i--){
                //     if(ans[i]!='('){
                //         x.push_back(ans.back());
                //         ans.pop_back();
                //     }
                //     else{
                //         ans.pop_back();
                //         ans+=x;
                //         x="";
                //     }
                // }
                while(ans.back()!='('){
                    x.push_back(ans.back());
                    ans.pop_back();
                }
                ans.pop_back();
                ans+=x;
                x="";
            }
            else ans.push_back(c);
        }
        return ans;
    }
};