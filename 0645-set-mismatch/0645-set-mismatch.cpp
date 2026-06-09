class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int dup;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                dup=nums[i];
                break;
            }
        }
        int mis=0;
        for(int i=0;i<n;i++){
            mis+=nums[i];
        }
        mis=abs((n*n+n)/2)-mis;
        return {dup,mis+dup};
    }
};