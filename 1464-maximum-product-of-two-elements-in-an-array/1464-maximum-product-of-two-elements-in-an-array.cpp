class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int m1=INT_MIN,m2=INT_MIN;
        int x=0;
        for(int i=0;i<n;i++){
            if(nums[i]>m1){
                m1=nums[i];
                x=i;
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]>m2 && i!=x) m2=nums[i];
        }
        return (m1-1)*(m2-1);
    }
};