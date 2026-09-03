class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mini=INT_MAX;
        for(int x:nums1){
            if(x%2==1)mini=min(mini,x);
        }
        int flag=1;
        for(int x:nums1){
            if(x%2==1 && (x-mini)<1){
                flag=0;
                break;
            }
        }
        if(flag)return true;
        flag=1;
        for(int x:nums1){
            if(x%2==0 && (x-mini)<1){
                flag=0;
                break;
            }
        }
        if(flag)return true;
        return false;
    }
};