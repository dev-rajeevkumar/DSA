class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int maxi = 0;
        int mx=0;
        int i=0;
        int j=0;
        while(i<n&&j<m) {
            if(nums1[i] > nums2[j]){
                i++;
                continue;
            }
            if(nums1[i] <= nums2[j])
            {
                mx=j-i;
                j++;
            }
            if(maxi<mx){
                maxi=mx;
            }

        }
       return maxi;
    }
};