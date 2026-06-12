class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<int>> freq;
        vector<vector<string>> ans;
        for(int i=0;i<strs.size();i++){
            string t=strs[i];
            vector<int> temp(26,0);
            for(int j=0;j<t.size();j++){
                temp[t[j]-'a']++;
            }
            freq.push_back(temp);
        }
        for(int i=0;i<strs.size();i++){
            if(freq[i][0]==-1)
                continue;
            vector<string> grp={strs[i]};
            for(int j=i+1;j<strs.size();j++){
                if(freq[j][0]==-1 || strs[i].size()!=strs[j].size())
                    continue;
                if(freq[i]==freq[j]){
                    grp.push_back(strs[j]);
                    freq[j][0]=-1;
                }
            }
            freq[i][0]=-1;
            ans.push_back(grp);
        }
        return ans;
    }
};