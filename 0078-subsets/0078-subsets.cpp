class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();
        n=pow(2,n);
        for(int i=0;i<n;i++){
            vector<int> temp;
            int j=0;
            int x=i;
            while(x>0){
                if(x%2==1){
                    temp.push_back(nums[j]);
                }
                j++;
                x/=2;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};