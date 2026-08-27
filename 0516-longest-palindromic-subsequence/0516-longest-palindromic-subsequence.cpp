class Solution {
public:
    int lcs(string s,string t){
        int n=s.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(s[i-1]==t[j-1])dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[n][n];
    }
    int longestPalindromeSubseq(string s) {
        string t=s;
        int a=0,b=t.size()-1;
        while(a<b){
            swap(t[a],t[b]);
            a++;
            b--;
        }
        return lcs(s,t);
    }
};

// class Solution {
// public:
//     int lps(string s,int a,int b){
//         if(a>b)return 0;
//         if(a==b)return 1;
//         if(s[a]==s[b])return 2+lps(s,a+1,b-1);
//         else return max(lps(s,a+1,b),lps(s,a,b-1));
//     }
//     int longestPalindromeSubseq(string s) {
//         int a=0,b=s.size()-1;
//         return lps(s,a,b);
//     }
// };