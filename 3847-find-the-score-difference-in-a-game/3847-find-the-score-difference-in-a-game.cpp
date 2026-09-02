class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        vector<int> score(2,0);
        int id=0;
        int ball=0;
        for(int i=0;i<nums.size();i++){
            ball++;
            if(nums[i]%2==1)id^=1;
            if(ball%6==0)id^=1;
            score[id]+=nums[i];
        }
        return score[0]-score[1];
    }
};