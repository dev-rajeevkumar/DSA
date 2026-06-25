class Solution {
public:
    int major(vector<int>& arr,int a,int b) {
        if(a==b) return arr[a];
        vector<int> nums;
        for(int i=a;i<=b;i++) nums.push_back(arr[i]);
        sort(nums.begin(),nums.end());
        int c=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]) c++;
            else c=1;
            if(c>((b-a+1)/2))
                return nums[i];
        }
        return -1;
    }
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int c=0;
            for(int j=i;j<nums.size();j++){
                if(nums[j]==target) c++;
                if((c>((j-i+1)/2)))ans++;
            }
        }
        return ans;
    }
};