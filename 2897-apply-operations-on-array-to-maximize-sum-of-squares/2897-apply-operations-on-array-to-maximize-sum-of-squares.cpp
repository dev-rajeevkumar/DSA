class Solution {
public:
    string binary(long long n){
        string s="";
        for(int i=0;i<32;i++){
            char x=n%2+'0';
            s.push_back(x);
            n/=2;
        }
        reverse(s.begin(),s.end());
        return s;
    }
    long long num(string s) {
    long long n=0;
    for(char c:s) {
        n = n*2+(c-'0');
    }
    return n;
    }
    int maxSum(vector<int>& nums, int k) {
        int n=nums.size();
        vector<string> bin;
        for(int i:nums){
            string x=binary(i);
            bin.push_back(x);
        }
        vector<int> bits(32,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<32;j++){
                if(bin[i][j]=='1'){
                    bits[j]++;
                }
            }
        }
        long long ans=0;
        for(int i=0;i<k;i++){
            string v="";
            for(int j=0;j<32;j++){
                if(bits[j]>0){
                    v.push_back('1');
                    bits[j]--;
                }
                else v.push_back('0');
            }
            long long g=num(v);
            ans+=(g*g);
            ans=ans%1000000007;
        }
        return ans;
    }
};