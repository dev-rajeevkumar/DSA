class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg;
        for(int i=0;i<k;i++){
            avg+=nums[i];
        }
        double max=avg;
        for(int i=k;i<nums.size();i++){
            avg=avg+nums[i]-nums[i-k];
            if(avg>max)
                max=avg;
        }
        return max/k;
    }
};