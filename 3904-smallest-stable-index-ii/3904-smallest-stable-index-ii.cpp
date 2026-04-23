class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int maxi=nums[0];
        vector<int> Min(n);
        Min[n - 1] = nums[n - 1];
        
        for (int i = n - 2; i >= 0; i--) {
            Min[i] = min(Min[i + 1], nums[i]);
        }
        for (int i = 0; i < n; i++) {
            if(maxi<nums[i]){
                maxi=nums[i];
            }
                int instability =maxi - Min[i];
            if (instability <= k) {
                return i;
            }
        }
        return -1;
    }
};