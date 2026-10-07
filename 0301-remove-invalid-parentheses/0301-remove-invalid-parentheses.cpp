class Solution {
public:
    bool valid(string s) {
        int c=0;
        for(char x:s) {
            if(x=='(') c++;
            else if(x==')'){
                c--;
                if(c<0) return false;
            }
        }
        return c==0;
    }
    void solve(string &s, int n, int i, string &cur, vector<string>& ans){
        if(i==n){
            if(valid(cur))ans.push_back(cur);
        }
        else if(islower(s[i])){
            cur.push_back(s[i]);
            solve(s,n,i+1,cur,ans);
            cur.pop_back();
        }
        else{
            solve(s,n,i+1,cur,ans);
            cur.push_back(s[i]);
            solve(s,n,i+1,cur,ans);
            cur.pop_back();
        }
    }
    vector<string> removeInvalidParentheses(string s) {
        vector<string> ans;
        string cur="";
        solve(s,s.size(),0,cur,ans);
        if(ans.size()==0)
            return ans;
        sort(ans.begin(),ans.end());
        int maxi=0;
        for(string x:ans){
            int t=x.size();
            maxi=max(maxi,t);
        }
        vector<string> out;
        for(string x:ans){
            int t=x.size();
            if(t==maxi){
                out.push_back(x);
                break;
            }
        }      
        for(string x:ans){
            if(x.size()==maxi && x!=out.back())out.push_back(x);
        }
        return out;
    }
};