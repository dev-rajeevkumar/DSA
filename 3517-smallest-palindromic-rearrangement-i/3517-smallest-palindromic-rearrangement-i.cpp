class Solution {
public:
    string reverse(string z){
        int a=0,b=z.size()-1;
        while(a<b){
            swap(z[a],z[b]);
            a++,b--;
        }
        return z;
    }
    string smallestPalindrome(string s) {
        int n=s.size();
        string ans=s.substr(0,n/2);
        sort(ans.begin(),ans.end());
        string ans2=reverse(ans);
        if(n%2==1)ans+=s[n/2];
        return ans+ans2;
    }
};