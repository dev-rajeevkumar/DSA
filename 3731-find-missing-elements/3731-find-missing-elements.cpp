class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a=nums[0],b=nums.back();
        vector<int> ans;
        int x=0;
        while(a<b){
            if(nums[x]==a){
                a++;
                x++;
            }
            else{
                ans.push_back(a);
                a++;
            }
        }
        return ans;
    }
};