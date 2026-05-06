class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int n1=nums1.size();
        int n2=nums2.size();
        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                if(nums1[i]==nums2[j]){
                    for(int k=j+1;k<n2;k++){
                        if(nums2[k]>nums2[j]){
                            ans.push_back(nums2[k]);
                            break;
                        }
                        if(k==n2-1){
                            ans.push_back(-1);
                        }
                    }
                    if(j==n2-1){
                        ans.push_back(-1);
                    }
                }
            }
        }
        return ans;
    }
};