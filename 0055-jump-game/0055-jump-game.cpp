class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return true;
        int i=0;
        while(i<n-1){
            int m=0,id=0;
            if(nums[i]+i >=n-1)
                return true;
            for(int j=i+1;j<=i+nums[i]&&j<n;j++){
                int x=nums[j]+j;
                if(x>=m){
                    m=x;
                    id=j;
                }
                if(x>=n-1)
                    return true;
            }
            i=id;
            if(nums[id]==0)
                return false;
        }
        return false;
    }
};