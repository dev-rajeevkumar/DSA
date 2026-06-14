class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int n=nums.size(),a=0,j=n-1,i=(n+1)/2-1;
        while(1){
            ans.push_back(nums[i]);
            i--;
            a++;
            if(a==n) break;
            ans.push_back(nums[j]);
            j--;
            a++;
            if(a==n) break;
        }
        nums=ans;
    }
};