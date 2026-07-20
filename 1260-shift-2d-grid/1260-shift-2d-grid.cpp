class Solution {
public:
    void rotate(vector<int>& nums, int k) {
         int n=nums.size();
         vector<int> ans;
         k=k%n;
         k=n-k;
         for(int i=k;i<n;i++){
            ans.push_back(nums[i]);
         }
         for(int j=0;j<k;j++){
            ans.push_back(nums[j]);
         }
    nums=ans;
    }
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int> t;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                t.push_back(grid[i][j]);
            }
        }
        k=k%t.size();
        rotate(t,k);
        int x=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                grid[i][j]=t[x];
                x++;
            }
        }
        return grid;
    }
};