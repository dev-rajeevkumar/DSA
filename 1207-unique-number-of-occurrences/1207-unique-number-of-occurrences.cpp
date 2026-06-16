class Solution {
public:
    bool uniqueOccurrences(vector<int>& nums) {
        vector<int> f(2001,0);
        for(int i=0;i<nums.size();i++) f[nums[i]+1000]++;
        for(int i=0;i<f.size();i++){
            if(f[i]==0) continue;
            for(int j=i+1;j<f.size();j++){
                if(f[j]==0)continue;
                if(f[i]==f[j]) return false;
            }
        }
        return true;
    }
};