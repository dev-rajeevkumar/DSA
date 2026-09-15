class Solution {
public:
    bool canMakeEqual(vector<int>& nums, int k) {
        vector<int> num=nums;
        int c=0;
        for(int i=0;i<nums.size()-1;i++){
            if(num[i]==-1){
                num[i]=1;
                num[i+1]*=-1;
                c++;
            }
        }
        if(c<=k && num.back()==1)return true;
        num=nums;
        c=0;
        for(int i=0;i<nums.size()-1;i++){
            if(num[i]==1){
                num[i]=-1;
                num[i+1]*=-1;
                c++;
            }
        }
        if(c<=k && num.back()==-1)return true;
        return false;
    }
};