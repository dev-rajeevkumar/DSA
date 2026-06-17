class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> ans;
        int c=0;
        int out =0;
        for(char ch:chars){
            if(c==0){
                ans.push_back(ch);
                c++;
                out++;
            }
            else if(ans[out-1]==ch){
                c++;
            }
            else{
                if(c>1){
                string siz=to_string(c);
                for(char x:siz){
                    ans.push_back(x);
                    out++;
                    c=1;
                }
                }
                ans.push_back(ch);
                out++;
            }
        }
        if(c>1){
                string siz=to_string(c);
                for(char x:siz){
                    ans.push_back(x);
                    out++;
                    c=1;
                }
                }
        chars=ans;
        return out;
    }
};