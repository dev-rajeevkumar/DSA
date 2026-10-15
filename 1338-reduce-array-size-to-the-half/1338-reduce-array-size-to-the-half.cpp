class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int maxi=*max_element(arr.begin(),arr.end());
        int n=arr.size();
        vector<int> f(maxi+1);
        for(int x:arr)f[x]++;
        vector<int> a;
        long long sum=0;
        for(int i:f){
            if(i>0)a.push_back(i);
            sum+=i;
        }
        sort(a.rbegin(),a.rend());
        int ans=0;
        long long c=0;
        for(int i:a){
            ans++;
            c+=i;
            if(2*c >= sum)return ans;
        }
        return ans;
    }
};