class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        vector<string> sd;
        vector<int> f(101,0);
        for(string s:nums){
            int x=s.size();
            f[s.size()]=1;
        }
        vector<string> len;
        for(int i=100;i>0;i--){
            if(f[i]==0)continue;
            for(string x:nums){
                if(x.size()==i){
                    len.push_back(x);
                }
            }
            sort(len.rbegin(),len.rend());
            for(string y:len)sd.push_back(y);
            len.clear();
        }
        return sd[k-1];
    }
};