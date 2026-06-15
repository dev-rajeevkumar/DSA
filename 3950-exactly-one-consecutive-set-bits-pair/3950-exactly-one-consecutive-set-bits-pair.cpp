class Solution {
public:
    bool consecutiveSetBits(int n) {
        string s="";
        while(n>0){
            s+=to_string(n%2);
            n/=2;
        }
        int c=0;
        for(int i=1;i<s.size();i++){
            if(s[i]=='1' && s[i-1]=='1') c++;
        }
        if(c==1) return true;
        return false;
    }
};