class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> left={0};
        vector<int> right={0};
        for(int i=0;i<nums.size()-1;i++){
            left.push_back(left[i]+nums[i]);
        }
        int a=0;
        for(int i=nums.size()-1;i>0;i--){
            right.push_back(right[a]+nums[i]);
            a++;
        }
        a=0;
        int b=nums.size()-1;
        while(a<b){
            swap(right[a],right[b]);
            a++;
            b--;
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=abs(right[i]-left[i]);
        }
        return nums;
    }
};