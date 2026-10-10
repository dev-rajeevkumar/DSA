class Solution {
public:
    bool check(vector<int>& a,int m,int limit){
        long long n=0;
        for(int x:a){
            if(x>m)n+=(x-m);
        }
        return n<=limit;
    }
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        vector<int> a;
        
        for(int i=0;i<nums1.size();i++){
            a.push_back(abs(nums1[i]-nums2[i]));
        }
        int limit=k1+k2;
        int low=0,high=*max_element(a.begin(),a.end());
        int k=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(check(a,mid,limit)){
                k=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        for(int i=0;i<a.size();i++){
            if(a[i]>k && limit>0){
                limit-=(a[i]-k);
                a[i]=k;
            }
        }
        high=*max_element(a.begin(),a.end());
        for(int i=0;i<a.size();i++){
            if(a[i]==high && a[i]>0 && limit>0){
                limit--;
                a[i]=a[i]-1;
            }
        }
        
        long long ans=0;
        for(int x:a)ans+=pow(x,2);
        return ans;
    }
};