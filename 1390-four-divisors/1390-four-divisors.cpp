class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int c=1;
            int temp=1;
            for(int j=2;j<=nums[i];j++){
                if(nums[i]%j==0){
                    c++;
                    temp+=j;
                }
                if(c>4)
                    break;
            }
            if(c==4)
                ans+=temp;
        }
        return ans;
    }
};