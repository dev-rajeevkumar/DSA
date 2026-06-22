class Solution {
public:
bool check(vector<int>& arr,vector<int>& s,int a,int b){
    if(a != b){
        int val = s[b];
        int pos = b;
        for(int i=a;i<b;i++){
            if(s[i] >= val){
                pos = i;
                break;
            }
        }
        for(int i=b;i>pos;i--)
            s[i] = s[i-1];
        s[pos] = val;
    }
    for(int i=a;i<=b;i++){
        if(arr[i] != s[i])
            return false;
    }
    return true;
}
    int maxChunksToSorted(vector<int>& arr) {
        vector<int> s=arr;
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int ans=0;
        int a=0,b=0;
        while(b<n){
            if(check(arr,s,a,b)){
                a=b+1;
                b++;
                ans++;
            }
            else
                b++;
        }
        return ans;
    }
};