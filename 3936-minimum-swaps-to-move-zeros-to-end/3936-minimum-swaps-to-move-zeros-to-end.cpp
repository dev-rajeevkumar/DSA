class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0)
                count++;
        }
        int ans=count;
        for(int i=n-count;i<n;i++){
            if(nums[i]==0)
                ans--;
        }
        return ans;
    }
};