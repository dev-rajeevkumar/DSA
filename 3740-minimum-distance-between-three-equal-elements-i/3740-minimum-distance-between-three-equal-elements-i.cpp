class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n=nums.size();
       vector<pair<int,pair<int,int>>> f(n+1);
       int ans=INT_MAX;
       for(int i=0;i<n;i++){
        f[i].first=0;
       }
       for(int i=0;i<n;i++){
        f[nums[i]].first++;
        if(f[nums[i]].first==3){
            ans=min(ans,2*(i-f[nums[i]].second.first));
            f[nums[i]].first=2;
        }
        f[nums[i]].second.first=f[nums[i]].second.second;
        f[nums[i]].second.second=i;
       }
       if(ans==INT_MAX)return -1;
       return ans;
    }
};