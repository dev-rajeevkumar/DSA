class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            set <int> a;
            for(int j=i;j<nums.size();j++){
                a.insert(nums[j]);
                int x=a.size();
                ans+=x*x;
            }
        }
        return ans;
    }
};