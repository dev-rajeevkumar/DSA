class Solution {
public:
    long long findMaximumScore(vector<int>& nums){
        int n=nums.size();
        long long ans=0;
        int id=0;
        for(int i=1;i<nums.size();i++){
            if(nums[id]<nums[i]){
                int l=i-id;
                ans+=1LL*nums[id]*l;
                id=i;
            }
        }
        ans+=1LL*nums[id]*(n-id-1);
        return ans;
    }
};