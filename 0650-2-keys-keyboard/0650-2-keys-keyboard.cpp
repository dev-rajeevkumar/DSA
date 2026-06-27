class Solution {
public:
    int minSteps(int n) {
        int ans=0;
        int p=2;
        while(n>1){
            while(1){
                if(n%p==0){
                    ans+=p;
                    n/=p;
                    break;
                }
                p++;
            }
        }
        return ans;
        // int ans=0;
        // while(n>1){
        //     int m=n/2;
        //     while(1){
        //         if(n%m==0){
        //             ans+=(n/m);
        //             n=m;
        //             break;
        //         }
        //         m--;
        //     }
        // }
        // return ans;
    }
};