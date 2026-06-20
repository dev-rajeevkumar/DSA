class Solution {
public:
    int magicalString(int n) {
        string mg="122";
        int cur=1;
        int i=1;
        while(mg.size()<n){
            i++;
            if(mg[i]=='2'){
                if(cur==1){
                    mg+="11";
                    cur=2;
                    continue;
                }
            }
            if(mg[i]=='1'){
                if(cur==1){
                    mg+="1";
                    cur=2;
                    continue;
                }
            }
            if(mg[i]=='2'){
                if(cur==2){
                    mg+="22";
                    cur=1;
                    continue;
                }
            }
            if(mg[i]=='1'){
                if(cur==2){
                    mg+="2";
                    cur=1;
                }
            } 
        }
        int out=0;
        for(int j=0;j<n;j++){
            if(mg[j]=='1')out++;
        }
        return out;
    }
};