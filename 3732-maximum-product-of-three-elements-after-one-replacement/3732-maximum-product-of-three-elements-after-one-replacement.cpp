class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        long long maxi1=0,maxi2=0;
        for(int x:nums){
            x=abs(x);
            if(x>maxi1){
                maxi2=maxi1;
                maxi1=x;
            }
            else if(x>maxi2){
                maxi2=x;
            }
        }
        return maxi1*maxi2*100000;
    }
};