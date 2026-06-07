class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN;
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(nums[i]>maxi){
                maxi=nums[i];
            }
        }
        for(int i=0;i<n;i++){
            int next=INT_MIN;
            for(int j=i+1;j<n;j++){
                if(nums[j]>nums[i]){
                    next=nums[j];
                    break;
                }
            }
            if(next==INT_MIN){
                for(int j=0;j<i;j++){
                    if(nums[j]>nums[i]){
                        next=nums[j];
                        break;
                    }
                }
            }
            if(next==INT_MIN){
                ans.push_back(-1);
            }
            else{
                ans.push_back(next);
            }
        }
        return ans;
    }
};