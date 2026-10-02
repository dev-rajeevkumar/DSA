class Solution {
public:
    void make(int n,int c,string s,vector<string> & ans){
        if(c==0&&n==0)ans.push_back(s);
        if(n>0 && c>=0){
            make(n-1,c+1,s+"(",ans);
            make(n-1,c-1,s+")",ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        make(2*n,0,"",ans);
        return ans;
    }
};