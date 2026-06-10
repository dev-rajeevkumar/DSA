class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        if(n%2==0){
            if((s.substr(0,n/2)==s.substr(n/2,n/2)))
                return true;
        }
        if(n==1)
            return false;
        int a=1;
        while(a!=(n/2)+1){
            if(n%a!=0){
                a++;
                continue;
            }
            int b=n/a;
            string temp=s.substr(0,a);
            string ans="";
            while(b--){
                ans+=temp;
            }
            if(ans==s)
                return true;
            a++;
        }
        

        return false;
    }
};