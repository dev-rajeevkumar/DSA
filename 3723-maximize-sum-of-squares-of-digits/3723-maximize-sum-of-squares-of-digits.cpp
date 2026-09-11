class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if((num*9)<sum)return "";
        string ans="";
        int x=sum/9;
        for(int i=0;i<x;i++)ans+="9";
        if(ans.size()<num)ans.push_back((sum%9)+'0');
        while(ans.size()<num)ans.push_back('0');
        return ans;
    }
};