class Solution {
public:
    string frequencySort(string s) {
        vector<int> f(130,0);
        string ans="";
        for(char x:s) f[x]++;
        int max=0;
        int z=0;
        for(int i=0;i<f.size();i++){
            if(f[i]>max){
                max=f[i];
                z=i;
            }
        }
        while(max>0){
            while(max>0){
                ans+=char(z);
                max--;
            }
            f[z]=0;
            for(int i=0;i<f.size();i++){
                if(f[i]>max){
                    max=f[i];
                    z=i;
                }
            }
        }
        return ans;
    }
};