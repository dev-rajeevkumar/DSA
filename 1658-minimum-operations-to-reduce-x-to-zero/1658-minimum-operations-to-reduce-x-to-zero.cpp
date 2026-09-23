class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int sum=0;
        for(int i:nums)sum+=i;
        if(sum==x)return n;
        sum-=x;
        int a=0,b=0;
        int cur=0;
        int ans=0;
        while(a<n && b<n){
            if(cur==sum){
                ans=max(ans,b-a);
                cur-=nums[a];
                a++;
        
            }
            if(cur<sum){
                cur+=nums[b];
                b++;
            }
            else{
                cur-=nums[a];
                a++;
            }
        }
        while(a<n){
            if(cur==sum){
                ans=max(ans,b-a);
            }
            cur-=nums[a];
            a++;
        }
        if(cur==sum){
                ans=max(ans,b-a);
            }
        if(ans==0)return -1;
        return n-ans;
    }
};