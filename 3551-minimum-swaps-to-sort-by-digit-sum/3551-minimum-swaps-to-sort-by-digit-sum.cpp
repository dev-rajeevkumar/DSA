class Solution {
public:
    int digisum(int n) {
        int sum = 0;  
        while(n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        vector<pair<int,int>> mix;
        for(int x:nums){
            mix.push_back({digisum(x),x});
        }
        sort(mix.begin(),mix.end());
        int c=0;
        vector<int> sorted;
        for(int i=0;i<mix.size();i++){
            sorted.push_back(mix[i].second);
        }
        int i=0;
        int ans=0;
        map<int,int> mp;
        for(int i=0;i<n;i++) {
            mp[nums[i]]=sorted[i];
        }
        while(i < n) {
            vector<int> cyc;
            if(nums[i] == sorted[i] || mp.find(nums[i]) == mp.end()) {
                i++;
                continue;
            }
            cyc.push_back(nums[i]);
            int x = nums[i];
            while(true) {
                if(mp.find(x) == mp.end()) break;
                int next = mp[x];
                mp.erase(x);
                cyc.push_back(next);
                x = next;
                if(x == cyc[0]) break;
            }
            int y = cyc.size();
            ans += y-2;
            i++;
        }
        return ans;
    }
};