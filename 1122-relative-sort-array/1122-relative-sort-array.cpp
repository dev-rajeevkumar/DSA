class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int maxi=*max_element(arr1.begin(),arr1.end());
        vector<int> f(maxi+1);
        for(int x:arr1)f[x]++;
        int x=0;
        for(int i:arr2){
            while(f[i]>0){
                arr1[x]=i;
                x++;
                f[i]--;
            }
        }
        for(int i=0;i<=maxi;i++){
            while(f[i]>0){
                arr1[x]=i;
                x++;
                f[i]--;
            }
        }
        return arr1;
    }
};