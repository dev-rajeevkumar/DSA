class Solution {
public:
    int minPartitions(string n) {
    int ans=0;
    for(int i=0;i<n.size();i++){
        int a=n[i]-'0';
        if(a>ans)
            ans=a;
        if(a==9)
            break;
    }
    return ans;
    }
};