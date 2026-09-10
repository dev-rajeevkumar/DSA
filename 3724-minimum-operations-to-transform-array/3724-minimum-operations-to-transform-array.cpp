class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2) {
        long long ans=1;
        for(int i=0;i<nums1.size();i++)ans+=abs(nums1[i]-nums2[i]);
        int l=nums2.back();
        for(int i=0;i<nums1.size();i++){
            if(l<=max(nums1[i],nums2[i]) && l>=min(nums1[i],nums2[i]))
            return ans;
        }
        int mini=INT_MAX;
        for(int x:nums1)mini=min(mini,abs(x-l));
        for(int i=0;i<nums1.size();i++)
        mini=min(mini,abs(nums2[i]-l));
        return ans+mini;
    }
};