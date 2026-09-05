class Solution {
public:
    long long bin(int n){
        long long ans=0;
        while(n>0){
            ans=(ans*10)+n%2;
            n/=2;
        }
    return ans;
    }
    bool palin(long long n){
        long long org=n;
        long long ans=0;
        while(n>0){
            ans=(ans*10)+n%10;
            n/=10;
        }
        return org==ans;
    }
    vector<int> minOperations(vector<int>& nums) {
        int n=nums.size();
        vector<int> a;
        for(int i=1;i<5050;i+=2){
            long long b=bin(i);
            if(palin(b))
                a.push_back(i);
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
            int u,v;
            for(int j=0;j<a.size();j++){
                if(a[j]>nums[i]){
                    u=nums[i]-a[j-1];
                    v=a[j]-nums[i];
                    break;
                }
            }
            u=min(u,v);
            ans.push_back(u);
        }
        return ans;
    }
};