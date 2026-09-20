class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ans=0;
        int a=0,b=0;
        while(b<nums.size()){
            if(nums[b]==1){
                b++;
                ans=max(ans,b-a);
                continue;
            }
            if(nums[b]==0 && k>0){
                b++;
                k--;
                ans=max(ans,b-a);
                continue;
            }
            else{
                while(a<nums.size() && nums[a]==1)a++;
                a++;
                k++;
            }
        }
        return ans;
    }
};