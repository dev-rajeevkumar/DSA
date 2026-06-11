class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int k=target.size();
        int j=0;
        for(int i=1;i<=target[k-1];i++){
            while(j<target.size()){
                if(i==target[j]){
                    ans.push_back("Push");
                    j++;
                    break;
                }
                else{
                    ans.push_back("Push");
                    ans.push_back("Pop");
                    break;
                }

            }
        }
        return ans;
    }
};