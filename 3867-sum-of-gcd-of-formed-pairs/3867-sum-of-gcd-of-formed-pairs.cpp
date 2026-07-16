class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> prefixgcd;
        int mx=nums[0];
        for(int x:nums){
            mx=max(mx,x);
            prefixgcd.push_back(gcd(mx,x));
        }
        sort(prefixgcd.begin(),prefixgcd.end());
        int a=0,b=prefixgcd.size()-1;
        long long ans=0;
        while(a<b){
            ans+=1LL*gcd(prefixgcd[a],prefixgcd[b]);
            a++;
            b--;
        }
        return ans;
    }
};