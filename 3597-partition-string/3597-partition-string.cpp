class Solution {
public:
    vector<string> partitionString(string s) {
        vector<string> ans;
        unordered_set<string> t;
        string x="";
        for(int i=0;i<s.size();i++){
            x.push_back(s[i]);
            if(!t.count(x)){
                ans.push_back(x);
                t.insert(x);
                x="";
            }
        }
        return ans;
    }
};