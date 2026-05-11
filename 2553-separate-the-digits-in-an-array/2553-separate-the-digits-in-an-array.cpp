class Solution {
public:
int reverse(int n){
    int r=0;
    while(n!=0){
        r=r*10+(n%10);
        n=n/10;
    }
    return r;
}
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int a=reverse(nums[i]);
            int b=nums[i];
            while(a!=0){
                ans.push_back(a%10);
                a=a/10;
            }
            while(b%10==0){
                ans.push_back(0);
                b=b/10;
            }
        }
        return ans;
    }
};