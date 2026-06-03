class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int c=0,a=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                c++;
            }
            else{
                nums[a]=nums[i];
                a++;
            }    
        }
        for(int i=n-c;i<n;i++){
            nums[i]=0;
        }
    }
};