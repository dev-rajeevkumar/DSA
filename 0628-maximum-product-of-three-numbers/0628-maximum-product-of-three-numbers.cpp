class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int> arr;
        if(n>6){
            arr.push_back(nums[0]);
            arr.push_back(nums[1]);
            arr.push_back(nums[2]);
            arr.push_back(nums[n-3]);
            arr.push_back(nums[n-2]);
            arr.push_back(nums[n-1]);
            n=6;
            nums=arr;
        }
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    ans=max(ans,(nums[i]*nums[j]*nums[k]));
                }
            }
        }       
        return ans;
    }
};