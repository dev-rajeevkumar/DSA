class Solution {
public:
    int find(vector<int>& nums) {
        int maxi=0,id=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] > maxi){
                maxi = nums[i];
                id=i;
            }
        }
        return id;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        sort(words.begin(),words.end());
        vector<string> ans;
        int n=words.size();
        vector<int> arr(n,0);
        for(int i=0;i<n;i++){
            if(words[i]=="X") continue;
            arr[i]++;
            for(int j=i+1;j<n;j++){
                if(words[j]=="X") continue;
                if(words[i]==words[j]){
                    arr[i]++;
                    words[j]="X";
                }
            }
        }
        while(k>0){
            int id=find(arr);
            ans.push_back(words[id]);
            arr[id]=0;
            k--;
        }
        return ans;
    }
};