class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=0;
        int num=1;
        while(i<n){
            if(nums[i]<num){
                i++;
                continue;
            }
            if(nums[i]==num){
                num++;
                i++;
                continue;
            }
            i++;
        }
        return num;
    }
};