class Solution {
public:
    bool balance(vector<int>& arr,set<int>& even,set<int>& odd,int x){
        if(x%2==0)even.insert(x);
        else odd.insert(x);
        return even.size()==odd.size();
    }
    int longestBalanced(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            vector<int> arr;
            set<int> even;
            set<int> odd;
            for(int j=i;j<nums.size();j++){
                arr.push_back(nums[j]);
                if(balance(arr,even,odd,nums[j])){
                    int size=arr.size();
                    ans=max(ans,size);
                }
            }
        }
        return ans;
    }
};