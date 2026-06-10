class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        if(n==1)
            return 0;
        int i=0;
        while(i<n-1){
            int m=0,id=0;
            if(nums[i]+i >=n-1)
                return count+1;
            for(int j=i+1;j<=i+nums[i]&&j<n;j++){
                int x=nums[j]+j;
                if(x>=m){
                    m=x;
                    id=j;
                }
                if(x>=n-1)
                    return count+2;
            }
            i=id;
            count++;
        }
        return count;
    }
};