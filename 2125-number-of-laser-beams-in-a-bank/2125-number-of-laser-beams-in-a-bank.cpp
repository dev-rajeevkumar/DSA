class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n=bank.size();
        int s=bank[0].size();
        int sum=0;
        vector<int> nums;
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<s;j++){
                if(bank[i][j]=='1')
                    count++;
            }
            if(count==0)
                continue;
            nums.push_back(count);
        }
        if(nums.size()==1||nums.size()==0)
            return 0;
        
        for(int i=0;i<nums.size()-1;i++){
            sum=sum+(nums[i]*nums[i+1]);
        }
        return sum;
    }
};