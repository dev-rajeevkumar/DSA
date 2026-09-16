class Solution {
public:
    long long convert(string s) {
        long long num = 0;
        for(char c : s) {
            num = num * 10 + (c - '0');
        }
        return num;
    }
    bool isprime(long long n){
        if(n<2)return false;
        for(long long i=2;i*i<=n;i++){
            if(n%i==0)return false;
        }
        return true;
    }
    long long sumOfLargestPrimes(string s) {
        long long ans=0;
        vector<long long>num;
        int n=s.size();
        for(int i=1;i<=n;i++){
            for(int j=0;j<=n-i;j++){
                long long t=convert(s.substr(j,i));
                if(find(num.begin(),num.end(),t)!=num.end())continue;
                if(isprime(t))num.push_back(t);
            }
        }
        sort(num.rbegin(),num.rend());
        int z=num.size();
        if(z>3)z=3;
        for(int i=0;i<z;i++)ans+=num[i];
        return ans;
    }
};