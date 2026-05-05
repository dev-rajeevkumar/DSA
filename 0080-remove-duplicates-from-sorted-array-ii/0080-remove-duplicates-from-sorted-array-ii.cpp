class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int n=nums.size();
        // if(n==1||n==2)
        // return n;
        // for(int i=2;i<n;i++){
        //     if((nums[i]==nums[i-1])&&(nums[i]==nums[i-2])){
        //         for(int j=i;j<n-1;j++){
        //             nums[j]=nums[j+1];
        //         }
        //         n--;
        //         i--;
        //     }
        // }
        // return n;
        int n=nums.size();
        if(n==1||n==2)
            return n;
        vector<int> ans;
        ans.push_back(nums[0]);
        ans.push_back(nums[1]);
        for(int i=2;i<n;i++){
            if(nums[i]==nums[i-1]&&nums[i]==nums[i-2]){
             continue;
            }
            else{
                ans.push_back(nums[i]);
            }
        }
          nums=ans;
        return nums.size();
    }
};