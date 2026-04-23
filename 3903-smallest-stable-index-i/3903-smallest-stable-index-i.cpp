class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int maxi=nums[0];
        
        for(int i=0;i<n;i++){
            int mini=nums[i];
            for(int j=i;j<n;j++){
                if(mini>nums[j]){
                    mini=nums[j];
                }
            }
            if(maxi<nums[i]){
                maxi=nums[i];
            }
            if((maxi-mini)<=k){
                return i;
            }
        }
        return -1;
    }
};