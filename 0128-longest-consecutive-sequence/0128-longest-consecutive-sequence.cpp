class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0 || nums.size()==1)
            return nums.size();
        int ans=0;
        int t=1;
        sort(nums.begin(),nums.end());
        int x=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]==x){
                continue;
            }
            if(nums[i]==x+1){
                t++;
                x=nums[i];
            }
            if(nums[i]>x+1){
                x=nums[i];
                if(t>ans)
                    ans=t;
                t=1;
            }
        }
        return max(t,ans);
    }
};