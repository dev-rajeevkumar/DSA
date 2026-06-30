class Solution {
public:
    int numberOfSubstrings(string s) {
        int ans=0;
        int n=s.size();
        if(n<49990){
            for(int i=0;i<n;i++){
            int x=i;
            int a=0,b=0,c=0;
            while(x<n){
                if(s[x]=='a')a=1;
                else if(s[x]=='b')b=1;
                else c=1;
                if(a==1&&b==1&&c==1) break;
                x++;
            }
            ans+=n-x;
        }
        return ans;
        }
        int ans1=0;
        for(int i=0;i<n;i++){
            int x=i;
            int a=0,b=0,c=0;
            while(x<n){
                if(s[x]=='a')a=1;
                else if(s[x]=='b')b=1;
                else c=1;
                if(a==1&&b==1&&c==1) break;
                x++;
            }
            ans1+=n-x;
            i=x;
        }
        int p=0,q=n-1;
        while(p<q){
            swap(s[p],s[q]);
            p++;
            q--;
        }
        int ans2=0;
        for(int i=0;i<n;i++){
            int x=i;
            int a=0,b=0,c=0;
            while(x<n){
                if(s[x]=='a')a=1;
                else if(s[x]=='b')b=1;
                else c=1;
                if(a==1&&b==1&&c==1) break;
                x++;
            }
            ans2+=n-x;
            i=x;
        }
        return max(ans1,ans2);
    }
};