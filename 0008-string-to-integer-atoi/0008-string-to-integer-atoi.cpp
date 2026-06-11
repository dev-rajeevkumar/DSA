class Solution {
public:
    int myAtoi(string s) {
        long long ans=0;
        int x=0;
        int op=0;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                ans=(ans*10)+(s[i]-'0');
                op++;
                if(ans*x<=INT_MIN)
                    return INT_MIN;
                if(ans>INT_MAX)
                    return INT_MAX;
                continue;
            }
            if(s[i]==' ' && op==0){
                continue;
            }
            if(s[i]=='-' && x==0 && op==0){
                x=-1;
                op++;
                continue;
            }
            if(s[i]=='+' && x==0 && op==0){
                x=1;
                op++;
                continue;
            }
            break;
        }
        if(x==0)
            x=1;
        return ans*x;
    }
};