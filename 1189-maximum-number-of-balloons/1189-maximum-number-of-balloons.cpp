class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> f(5,0);
        for(char c:text){
            if(c=='b')f[0]++;
            else if(c=='a')f[1]++;
            else if(c=='l')f[2]++;
            else if(c=='o')f[3]++;
            else if(c=='n')f[4]++;
        }
        return min({f[0],f[1],f[2]/2,f[3]/2,f[4]});
    }
};