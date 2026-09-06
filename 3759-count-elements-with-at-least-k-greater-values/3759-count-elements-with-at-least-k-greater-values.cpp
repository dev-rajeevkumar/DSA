class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans=0;
        int c=1;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]) c++;
            else{
                if(n-i>k)ans+=c;
                c=1;
            }
        }
        if(k==0)ans+=c;
        return ans;
    }
};