class Solution {
public:
    int centeredSubarrays(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=1;i<=n;i++){
            int sum=0;
            for(int j=0;j<i;j++){
                sum+=nums[j];
            }
            for(int k=0;k<i;k++){
                if(sum==nums[k]){
                    count++;
                    break;
                }
            }
            for(int j=i;j<n;j++){
                sum=sum+nums[j]-nums[j-i];
                for(int k=j-i+1;k<j+1;k++){
                    if(sum==nums[k]){
                    count++;
                    break;
                    }
                }
            }
        }
        return count;
    }
};