class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n==2 && nums[0]==nums[1])
            return {nums[0]};
        if(n<3)
            return nums;
        int n1,n2;
        int f1=0,f2=0;
        int c=1;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1])
                c++;
            else
                c=1;
            if(c>n/3){
                n1=nums[i];
                f1=1;
                break;
            }   
        }
        c=1;
        for(int i=n-1;i>0;i--){
            if(nums[i]==nums[i-1])
                c++;
            else
                c=1;
            if(c>n/3){
                n2=nums[i];
                f2=1;
                break;
            }   
        }
        if(f1==0&&f2==0){
            return {};
        }
        if(n1==n2)
            return {n1};
        return {n1,n2};
    }
};