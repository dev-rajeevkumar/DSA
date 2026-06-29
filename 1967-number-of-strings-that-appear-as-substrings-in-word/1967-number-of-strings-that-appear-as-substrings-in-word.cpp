class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int ans=0;
        for(int i=0;i<patterns.size();i++){
            if(patterns[i].size()>word.size())continue;
            for(int j=0;j<=word.size()-patterns[i].size();j++){
                if(word.substr(j,patterns[i].size())==patterns[i]){
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};