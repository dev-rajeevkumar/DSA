class Solution {
public:
    int minOperations(string s) {
        int mini=INT_MAX;
        for(char x:s){
            if(x=='a')continue;
            mini=min(mini,x-'a');
        }
        if(mini==INT_MAX)return 0;
        return 26-mini;
    }
};