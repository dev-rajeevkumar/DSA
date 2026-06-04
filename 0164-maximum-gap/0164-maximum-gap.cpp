class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int m=0;
        if(n<2)
            return 0;
        for(int i=1;i<n;i++){
            if((nums[i]-nums[i-1])>m)
                m=nums[i]-nums[i-1];
        }
        return m;
    }
};