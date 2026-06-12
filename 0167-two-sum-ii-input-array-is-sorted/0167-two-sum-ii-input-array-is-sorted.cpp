class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int a=0;
        int b=numbers.size()-1;
        while(a<b){
            if(numbers[a]+numbers[b]==target)
                return {a+1,b+1};
            if(numbers[a]+numbers[b]<target){
                a++;
                continue;
            }
            if(numbers[a]+numbers[b]>target){
                b--;
                continue;
            }
        }
        return {};
    }
};