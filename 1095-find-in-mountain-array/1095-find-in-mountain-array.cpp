class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n=mountainArr.length();
        int low=0;
        int high=n-1;
        while(low<high){
            int mid=(low+high)/2;
            if(mountainArr.get(mid)<mountainArr.get(mid+1))
                    low=mid+1;
            else
                high=mid;
        }
        int x=low;
        high=x;
        low=0;
        int mid=(low+high)/2;
        while(low<=high){
            if(mountainArr.get(mid)==target)return mid;
            if(mountainArr.get(mid)>target)high=mid-1;
            else low=mid+1;
            mid=(low+high)/2;
        }
        high=n-1;
        low=x;
        mid=(low+high)/2;
        while(low<=high){
            if(mountainArr.get(mid)==target)return mid;
            if(mountainArr.get(mid)<target)high=mid-1;
            else low=mid+1;
            mid=(low+high)/2;
        }
        return -1;
    }
};