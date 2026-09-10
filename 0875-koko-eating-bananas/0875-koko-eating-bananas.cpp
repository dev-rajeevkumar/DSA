class Solution {
public:
    bool finish(vector<int>& arr,int k,int mid){
        for(int n:arr){
            k-=(n+mid-1)/mid;
            if(k<0)
                return false;
        }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int k) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int mid=low+(high-low)/2;
        while(low<=high){
            if(finish(piles,k,mid))
                high=mid-1;
            else
                low=mid+1;
            mid=low+(high-low)/2;
        }

        return low;
    }
};