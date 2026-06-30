class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        set<pair<int,int>> uni;
        int n=nums.size();
        int a=0,b=1;
        while(a<n && b<n){
            if(a==b){
                b++;
                continue;
            }
            if(nums[b]-nums[a]==k){
                uni.insert({nums[a],nums[b]});
                a++;
                b++;
                continue;
            }
            if(nums[b]-nums[a]>k){
                a++;
                continue;
            }
            if(nums[b]-nums[a]<k){
                b++;
                continue;
            }
        }
        return uni.size();
    }
};