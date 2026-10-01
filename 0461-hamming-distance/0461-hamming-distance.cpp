class Solution {
public:
    string bin(int a){
        string ans="";
        while(a>0){
            ans.push_back(a%2);
            a/=2;
        }
        return ans;
    }
    int hammingDistance(int x, int y) {
    int ans=0;
    string xx=bin(x);
    string yy=bin(y);
    int n=xx.size();
    int m=yy.size();
    if(n<m)while(xx.size()<m)xx.push_back(0);
    if(n>m)while(yy.size()<n)yy.push_back(0);
    for(int i=0;i<xx.size();i++){
        if(xx[i]!=yy[i])ans++;
    }
    return ans;
    }
};