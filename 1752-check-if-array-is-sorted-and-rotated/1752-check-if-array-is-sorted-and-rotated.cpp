class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int d=0,a=0;
        int high=nums[0];
        for(int i=0;i<n;i++){
            if(nums[i]>high){
                high=nums[i];
                a=i;
            }
        }
        for(int i=a+1;i<n;i++){
            if(nums[i]!=high)
                break;
            a=i;
        }
        vector<int> ans;
        for(int i=a+1;i<n;i++){
            ans.push_back(nums[i]);
        }
        for(int i=0;i<=a;i++){
            ans.push_back(nums[i]);
        }
        sort(nums.begin(),nums.end());
        if(nums==ans)
            return true;
        return false;
    }
};