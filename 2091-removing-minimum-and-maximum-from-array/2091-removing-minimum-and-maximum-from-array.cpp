class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        if(n<3)return n;
        int maxid=0,minid=0;
        for(int i=0;i<n;i++){
            if(nums[i]>nums[maxid])maxid=i;
            if(nums[i]<nums[minid])minid=i;
        }
        int a=max(maxid,minid)+1;
        int b=n-min(maxid,minid);
        int c=min(maxid,minid)+n-max(maxid,minid)+1;
        return min(a,min(b,c));
    }
};