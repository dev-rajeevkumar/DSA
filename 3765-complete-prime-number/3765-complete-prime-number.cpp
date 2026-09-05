class Solution {
public:
    bool prime(int n){
        if(n<2)return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0)return false;
        }
        return true;
    }
    bool completePrime(int num) {
        int rev=0;
        int x=0;
        int z=1;
        while(num>0){
            rev=rev*10 + num%10;
            x+=(num%10)*z;
            z*=10;
            num/=10;
            if(!prime(x))return false;
        }
        num=rev;
        rev=0;
        x=0;
        z=1;
        while(num>0){
            rev=rev*10 + num%10;
            num/=10;
            if(!prime(rev))return false;
        }
        return true;
    }
};