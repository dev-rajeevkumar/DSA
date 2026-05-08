class Solution {
public:
    void sortColors(vector<int>& nums) {
        // vector <int> ans;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==0)
        //         ans.push_back(nums[i]);
        // } 
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==1)
        //         ans.push_back(nums[i]);
        // } 
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==2)
        //         ans.push_back(nums[i]);
        // } 
        // nums=ans;

        int a=0,b=0;
         for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
                a++;
            if(nums[i]==1)
                b++;
        } 
        for(int i=0;i<nums.size();i++){
            if(i<a)
                nums[i]=0;
            else if(i<a+b)
                nums[i]=1;
            else 
                nums[i]=2;
        } 
    }
};