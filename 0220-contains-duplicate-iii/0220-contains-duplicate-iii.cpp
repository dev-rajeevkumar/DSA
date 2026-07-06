class Solution {
public:
    bool Duplicate(vector<int>& arr) {
        vector<int> nums=arr;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1])
                return true;
        }
        return false;
    }
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        int n=nums.size();
        if(valueDiff==0){
            //find duplicate
            if(Duplicate(nums)==0)return false;
            for(int i=0;i<nums.size();i++){
                for(int j=i+1;(j<nums.size()&&j<=i+indexDiff);j++){
                    if((abs(i-j)<=indexDiff) && (abs(nums[i]-nums[j])<=valueDiff))
            return true;
                }     
        }
        return false;
        }
        for(int i=0;i<n;i++){
            for (int j=i+1;(j<n&&j<=i+indexDiff);j++){
                if(i==j)continue;
         if((abs(i-j)<=indexDiff) && (abs(nums[i]-nums[j])<=valueDiff))
            return true;
        }
        }
           return false;
    }
};