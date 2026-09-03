class Solution {
public:
    int minOperations(vector<int>& nums) {
        set<int> a;
        int n=nums.size();
        int i;
        for(i=n-1;i>=0;i--){
            int s=a.size();
            a.insert(nums[i]);
            if(s==a.size())break;
        }
        int ans=(n-a.size()+2)/3;
        return ans;
    }
};