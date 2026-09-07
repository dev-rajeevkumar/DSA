class Solution {
public:
    long long maxPoints(vector<int>& technique1, vector<int>& technique2, int k) {
        long long score=0;
        int n=technique1.size();
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            a[i]=technique2[i]-technique1[i];
            score+=technique1[i];
        }
        sort(a.rbegin(),a.rend());
        for(int i=0;i<n-k;i++){
            if(a[i]<0)break;
            score+=a[i];
        }
        return score;
    }
};