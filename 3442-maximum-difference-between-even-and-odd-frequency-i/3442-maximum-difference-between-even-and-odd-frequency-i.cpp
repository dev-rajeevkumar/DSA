class Solution {
public:
    int maxDifference(string s) {
        vector<int> f(26,0);
        for(char c:s)f[c-'a']++;
        int even=INT_MAX,odd=0;
        for(int x:f){
            if(x>0 && x%2==0)even=min(even,x);
            else odd=max(odd,x);
        }
        return odd-even;
    }
};