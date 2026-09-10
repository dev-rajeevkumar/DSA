class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> ans;
        string a=".";
        for(int i=0;i<n-1;i++) a+="#";
        for(int i=0;i<m;i++) ans.push_back(a);
        for(int i=0;i<n;i++) ans[m-1][i]='.';
        return ans;
    }
};