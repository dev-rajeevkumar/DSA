class Solution {
public:
    long long splitArray(vector<int>& nums) {
        long long ans1=0,ans2=0;
        int maxi=*max_element(nums.begin(),nums.end());
        int i=0;
        for(i;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1])continue;
            else break;
        }
        int id=i;
        for(i=id+2;i<nums.size();i++){
            if(nums[i-1]>nums[i])continue;
            else return -1;
        }
        for(int i=0;i<id;i++)ans1+=1LL*nums[i];
        for(int i=id+1;i<nums.size();i++)ans2+=1LL*nums[i];
        if(id<nums.size()-1 && nums[id]==nums[id+1]){
            return abs(ans1+maxi-ans2);
        }
        long long ans=min(abs(ans1+maxi-ans2),abs(ans2+maxi-ans1));
        return ans;
    }
};