class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        long long b=0;
        for(int i=s.size()-1;i>=0;i--){
            b=(b+shifts[i])%26;
            int z=s[i]+b;
            if(z>'z') z=z-26;
            s[i]=char(z);
        }
        return s;
    }
};