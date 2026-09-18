class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        vector<int> zero;
        int c=0;
        int one=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0')c++;
            else{
                one++;
                if(c>0)zero.push_back(c);
                c=0;
            }
        }
        if(c>0)zero.push_back(c);
        if(zero.size()==0)return s.size();
        if(zero.size()==1)return s.size()-zero[0];
        int maxi=0;
        for(int i=0;i<zero.size()-1;i++){
            maxi=max(maxi,zero[i]+zero[i+1]);
        }
        return one+maxi;
    }
};