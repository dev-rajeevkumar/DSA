class Solution {
public:
    int reverse(int n){
        int r=0;
        while(n!=0){
            r=r*10+(n%10);
            n=n/10;
        }
        return r;
    }
    int countDistinctIntegers(vector<int>& nums) {
        vector<int> ans;
        set<int> st(nums.begin(), nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            int a=reverse(nums[i]);
            st.insert(a); 
        }
        return st.size();
    }
};