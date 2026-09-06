class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        vector<int> ans(nums.begin()+k,nums.end());
        for(int j=0;j<k;j++){
           ans.push_back(nums[j]);
        }
    nums=ans;
    }
    vector<int> rotateElements(vector<int>& nums, int k) {
        vector<int> arr;
        for(int x:nums){
            if(x>=0)arr.push_back(x);
        }
        if(arr.size()<2)return nums;
        rotate(arr,k);
        int x=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                nums[i]=arr[x];
                x++;
            }
        }
        return nums;
    }
};