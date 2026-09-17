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
        vector<int> f(26,0);
        for(char x:s)f[x-'a']++;
        string ans="";
        string mid="";
        for(int i=0;i<26;i++){
            if(f[i]%2==1){
                mid.push_back(char('a'+i));
            }
            int x=f[i]/2;
            while(x--){
                ans.push_back(char('a'+i));
            }
            
        }
        
        sort(ans.begin(),ans.end());
        string ans2=reverse(ans);
        return ans+mid+ans2;
    }
};