class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int n=nums.size();
        int right=n,left=n;
        if(nums[start]==target)
            return 0;
        for(int i=start;i<n;i++)
        {
            if(nums[i]==target)
                {
                    right=(i-start);
                    break;
                }
        }
        for(int i=start-1;i>=0;i--)
        {
            if(nums[i]==target)
                {
                    left=(start-i);
                    break;
                }
        }
    if(right<left)
        return right;

    return left;
    }
};