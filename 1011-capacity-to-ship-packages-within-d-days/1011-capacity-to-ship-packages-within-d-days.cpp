class Solution {
public:
bool canfinish(vector<int>& arr,int day,int m){
    int sum=0;
    for(int x:arr){
        if((sum+x)<=m){
            sum+=x;
        }
        else{
            sum=x;
            day--;
        }
    }
    if(sum>0)day--;
    if(day>=0)return true;
    return false;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=0;
        for(int x:weights)high+=x;
        int mid=low+(high-low)/2;
        while(low<= high){
            if(canfinish(weights,days,mid))
                high=mid-1;
            else 
                low=mid+1;
            mid=low+(high-low)/2;
        }
        return mid;
    }
};