class Solution{
public:
    bool same(vector<int>& nums,vector<int>& sorted,int l,int r){
        vector<int> a;
        for(int i=l;i<=r;i++)a.push_back(nums[i]);
        sort(a.begin(),a.end());
        for(int i=l;i<=r;i++){
            if(a[i-l]!=sorted[i])return false;
        }
        return true;
    }
    bool canSort(vector<int>& nums,int l,int r){
        int c=0;
        for(int i=l;i<r;i++){
            if(nums[i]>nums[i+1])c++;
        }
        if(nums[r]>nums[l])c++;
        return c<=1;
    }
    int sortableIntegers(vector<int>& nums){
        int n=nums.size(),ans=0;
        vector<int> sorted=nums;
        sort(sorted.begin(),sorted.end());
        for(int k=1;k<=n;k++){
            if(n%k!=0)continue;
            bool ok=true;
            for(int l=0;l<n;l+=k){
                int r=l+k-1;
                if(!same(nums,sorted,l,r)||!canSort(nums,l,r)){
                    ok=false;
                    break;
                }
            }
            if(ok)ans+=k;
        }
        return ans;
    }
};