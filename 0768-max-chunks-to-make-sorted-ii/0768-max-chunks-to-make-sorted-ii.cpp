class Solution {
public:
bool check(vector<int>& arr,vector<int>& s,int a,int b){
    vector<int> t;
    for(int i=a;i<=b;i++)
        t.push_back(s[i]);
    sort(t.begin(), t.end());
    for(int i=a;i<=b;i++){
        if(arr[i] != t[i-a])
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