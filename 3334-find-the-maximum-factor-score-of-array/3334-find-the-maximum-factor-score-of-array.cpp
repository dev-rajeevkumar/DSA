class Solution {
public:
    long long gcd(long long a,long long b){
        while(b!=0){
            long long r=a%b;
            a=b;
            b=r;
        }
        return a;
    }
    long long lcm(long long a, long long b) {
        return (a / gcd(a,b)) * b;
    }
    long long maxScore(vector<int>& nums) {
        int n=nums.size();
        long long ans=0;
        for(int j=-1;j<n;j++){
            long long gc=0,lc=1;
            for(int i=0;i<n;i++){
                if(j==i)continue;
                gc=gcd(gc,nums[i]);
                lc=lcm(lc,nums[i]);
            }
            ans=max(ans,gc*lc);
        }
        return ans;
    }
};