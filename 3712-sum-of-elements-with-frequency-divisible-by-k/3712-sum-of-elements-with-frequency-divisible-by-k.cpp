class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size(),ans=0,c=1;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                c++;
                continue;
            }
            if(c%k==0) ans=ans+nums[i-1]*c;    
            c=1;
        }
        if(c%k==0) ans+=nums[n-1]*c;
        return ans;

        // vector<int> f(100,0);
        // int ans=0;
        // for(int i=0;i<nums.size();i++){
        //     f[nums[i]-1]++;
        // }
        // for(int i=0;i<nums.size();i++){
        //     if(f[nums[i]-1]%k==0) ans+=nums[i];
        // }
        // return ans;

        // vector<int> f(100,0);
        // int ans=0;
        // for(int i=0;i<nums.size();i++){
        //     f[nums[i]-1]++;
        // }
        // for(int i=0;i<100;i++){
        //     if(f[i]==0) continue;
        //     if(f[i]%k==0) ans+=(i+1)*f[i];
        // }
        // return ans;
    }
};