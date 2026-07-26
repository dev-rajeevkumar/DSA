class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n>6){
            nums.erase(nums.begin()+3, nums.end()-3);
            n=6;
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