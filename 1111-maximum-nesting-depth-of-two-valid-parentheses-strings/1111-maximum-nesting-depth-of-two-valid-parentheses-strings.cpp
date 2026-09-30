class Solution {
public:
    vector<int> maxDepthAfterSplit(string s) {
        vector<int> ans;
        int c=0;
        int maxi=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')c++;
            else c--;
            maxi=max(maxi,c);
        }
        int x=(maxi+1)/2;
        c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                c++;
                if(c>x)ans.push_back(1);
                else ans.push_back(0);
            }
            else{
                if(c>x)ans.push_back(1);
                else ans.push_back(0);
                c--;
            }
        }
        return ans;
    }
};