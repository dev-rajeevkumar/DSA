class Solution {
public:
    vector<long long> maximumEvenSplit(long long n) {
        if(n%2==1)return {};
        vector<long long> ans;
        long long a=2;
        long long sum=0;
        while((sum+a)<=n){
            ans.push_back(a);
            sum+=a;
            a+=2;
        }
        if(sum<n){
            ans.back()+=(n-sum);
        }
        return ans;
    }
};