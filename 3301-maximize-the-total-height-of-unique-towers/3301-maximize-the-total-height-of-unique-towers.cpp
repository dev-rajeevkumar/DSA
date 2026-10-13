class Solution {
public:
    long long maximumTotalSum(vector<int>& maxih) {
        sort(maxih.rbegin(),maxih.rend());
        int h=maxih[0];
        long long ans=h;
        for(int i=1;i<maxih.size();i++){
            if(maxih[i]<h){
                h=maxih[i];
            }
            else{
                maxih[i]=h-1;
                h--;
            }
            if(maxih[i]<=0)return -1;
            ans+=maxih[i];
        }
        return ans;
    }
};