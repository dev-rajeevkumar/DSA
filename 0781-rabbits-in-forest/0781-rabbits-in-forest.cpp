class Solution {
public:
    int numRabbits(vector<int>& answers) {
        vector<int> f(1000, 0);
        for (int x : answers) f[x]++;
        int ans=0;
        for(int i=0;i<1000;i++){
            while (f[i] > 0) {
                ans += (i + 1);
                f[i] -= (i + 1);
            }
        }
        return ans;
    }
};