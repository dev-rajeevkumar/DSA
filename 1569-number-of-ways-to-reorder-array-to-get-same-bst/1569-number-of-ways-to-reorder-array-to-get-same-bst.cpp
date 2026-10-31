class Solution {
public:
    const long long MOD = 1000000007;
    long long fact[1001], invFact[1001];

    long long power(long long a, long long b) {
        long long ans = 1;
        while(b > 0) {
            if(b % 2) ans = (ans * a) % MOD;
            a = (a * a) % MOD;
            b /= 2;
        }
        return ans;
    }

    void precompute() {
        fact[0] = 1;
        for(int i = 1; i <= 1000; i++)
            fact[i] = (fact[i-1] * i) % MOD;

        invFact[1000] = power(fact[1000], MOD - 2);
        for(int i = 999; i >= 0; i--)
            invFact[i] = (invFact[i+1] * (i+1)) % MOD;
    }

    long long solve(vector<int>& nums, int l, int r) {
        if(l >= r) return 1;

        int root = nums[l];
        vector<int> left, right;

        for(int i = l + 1; i <= r; i++) {
            if(nums[i] < root) left.push_back(nums[i]);
            else right.push_back(nums[i]);
        }

        long long ways = (fact[left.size() + right.size()] * invFact[left.size()]) % MOD;
        ways = (ways * invFact[right.size()]) % MOD;

        vector<int> temp;
        for(int i = 0; i < left.size(); i++) temp.push_back(left[i]);
        for(int i = 0; i < right.size(); i++) temp.push_back(right[i]);

        int mid = l + left.size();
        for(int i = 0; i < left.size(); i++) nums[l + i + 1] = left[i];
        for(int i = 0; i < right.size(); i++) nums[mid + i + 1] = right[i];

        long long leftWays = solve(nums, l + 1, mid);
        long long rightWays = solve(nums, mid + 1, r);

        return (ways * leftWays % MOD) * rightWays % MOD;
    }

    int numOfWays(vector<int>& nums) {
        precompute();
        return (solve(nums, 0, nums.size() - 1) - 1 + MOD) % MOD;
    }
};