class Solution {
public:
    int minimumPushes(string word) {
        // vector<int> f(26,0);
        // for(char x:word)f[x-'a']++;
        // sort(f.rbegin(),f.rend());
        // int ans=0;
        // for(int i=0;i<8;i++)ans+=f[i];
        // for(int i=8;i<16;i++)ans+=(f[i]*2);
        // for(int i=16;i<24;i++)ans+=(f[i]*3);
        // for(int i=24;i<26;i++)ans+=(f[i]*4);
        int n=word.size();
        int ans=max(n,0)+max(n-8,0)+max(n-16,0)+max(n-24,0);
        return ans; 
    }
};