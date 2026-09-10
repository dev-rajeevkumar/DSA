class Solution {
public:
    bool canmake(vector<int>& arr, int m, int k,int mid){
        int c=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=mid)c++;
            else c=0;
            if(c==k){
                c=0;
                m--;
            }
        }
        if(m<=0) return true;
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(1LL*bloomDay.size()<1LL*m*k)return -1;
        int low=1;
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(canmake(bloomDay,m,k,mid)){
                high=mid-1;
                ans=mid;
            }
            else low=mid+1;
        }
        return ans;
    }
};