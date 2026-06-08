class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int a=0;
        int maxi=0;
        if(s.size()<2){
            return s.size();
        }
        for(int i=0;i<s.size();i++){
            for(int j=i-1;j>=a;j--){
                if(s[j]==s[i]){
                    a=j+1;
                    break;
                }
            }
            if((i-a)>maxi)
                maxi=i-a;
        }
        return maxi+1;
    }
};