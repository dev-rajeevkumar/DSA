class Solution {
public:
    bool isPossibleToRearrange(string s, string t, int k) {
        int n=s.size()/k;
        vector<string> ans1,ans2;
        for(int i=0;i<s.size();i+=n){
            ans1.push_back(s.substr(i,n));
            ans2.push_back(t.substr(i,n));
        }
        sort(ans1.begin(),ans1.end());
        sort(ans2.begin(),ans2.end());
        return ans1==ans2;
    }
};