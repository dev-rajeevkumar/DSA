class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n=colors.size();
       int f=colors[0]; 
       int l=colors[n-1];
       int a,b;
        for(int i=n-1;i>=0;i--){
            if(colors[i]!=f){
                a=i;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(colors[i]!=l){
                b=(n-1)-i;
                break;
            }
        }
        if(a>=b)
            return a;
        if(b>a)
            return b;
        return 0;
    }
};