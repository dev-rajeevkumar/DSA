class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        if(n==1)return arr[0];
        int c=1;
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1])c++;
            if(c>n/4) return arr[i];
            if(arr[i]!=arr[i-1])c=1;
        }
        return 1;
    }
};