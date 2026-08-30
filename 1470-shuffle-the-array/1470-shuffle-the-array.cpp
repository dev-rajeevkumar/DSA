class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        for(int i=n;i<nums.size();i++){
            nums.insert(nums.begin()+i-n+1,nums[i]);
            i++;
        }
        while(nums.size()>2*n) nums.pop_back();
        return nums;
    }
};