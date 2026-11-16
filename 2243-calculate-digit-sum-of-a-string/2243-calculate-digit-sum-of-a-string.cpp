class Solution {
public:
    string digitSum(string s, int k) {
        while(s.size()>k){
            string t="";
            int x=k;
            int z=0;
            for(int i=0;i<s.size();i++){
                if(x>0){
                    z+=s[i]-'0';
                    x--;
                }
                else {
                    t+=to_string(z);
                    z=0;
                    x=k;
                    i--;
                }
            }
                t+=to_string(z);
                z=0;
                x=k;
            s=t;
        }
        return s;
    }
};