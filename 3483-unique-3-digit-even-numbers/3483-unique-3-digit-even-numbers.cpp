class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n=digits.size();
        int ans=0;
        vector<int>f(10);
        for(int x:digits)f[x]++;
        int even=0,c=0;
        for(int i=1;i<10;i++){
            if(f[i]>0){
                f[i]--;
                for(int j=0;j<10;j++){
                    if(f[j]>0){
                        f[j]--;
                        int y=0;
                        for(int k=0;k<10;k++){
                            if(k%2==0 && f[k]>0)y++;
                        }
                        ans+=y;
                        f[j]++;
                    }
                }
                f[i]++;
            }
        }
       return ans;
    }
};