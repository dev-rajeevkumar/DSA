class Solution {
public:
    int longestPalindrome(string s) {
       vector<int> f(58,0);
       for(char x:s)f[x-'A']++;
       int ans=0;
       int odd=0;
       for(int x:f){
        ans+=x/2;
        if(x%2==1)odd=1;
       } 
       return (ans*2)+odd;
    }
};