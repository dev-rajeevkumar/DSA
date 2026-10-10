class Solution {
public:
    bool check(vector<int>& a, int m, long long limit) {
        long long need = 0;
        for(int x : a) {
            if(x > m)
                need += x - m;
        }
        return need <= limit;
    }
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        vector<int> a;
        for(int i = 0; i < nums1.size(); i++) {
            a.push_back(abs(nums1[i] - nums2[i]));
        }
        long long limit = 1LL * k1 + k2;
        int low = 0;
        int high = *max_element(a.begin(), a.end());
        int k = 0;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(check(a, mid, limit)) {
                k = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        for(int i = 0; i < a.size(); i++) {
            if(a[i] > k) {
                limit -= (a[i] - k);
                a[i] = k;
            }
        }
        if(k > 0) {
            for(int i = 0; i < a.size() && limit > 0; i++) {
                if(a[i] == k) {
                    a[i]--;
                    limit--;
                }
            }
        }
        long long ans = 0;
        for(int x : a) {
            ans += 1LL * x * x;
        }
        return ans;
    }
};