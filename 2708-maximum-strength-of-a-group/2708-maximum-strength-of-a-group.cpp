class Solution {
public:
    long long maxStrength(vector<int>& nums) {
        int neg=0;
        int maxi=*max_element(nums.begin(),nums.end());
        int mini=-10;
        long long pro=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                nums.erase(nums.begin()+i);
                i--;
                continue;
            }
            if(nums[i]<0){
                neg++;
                mini=max(mini,nums[i]);  
            }
            pro*=nums[i];
        }
        if(nums.size()==0)return 0;
        if(maxi==0 && nums.size()==1)return 0;
        if(nums.size()==1)return pro;
        if(pro<0)return pro/mini;
        return pro;
    }
};