class Solution {
public:
    int countDaysTogether(string aa, string la, string ab, string lb) {
        int days[]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int maa=stoi(aa.substr(0, 2));
        int mla=stoi(la.substr(0, 2));
        int mab=stoi(ab.substr(0, 2));
        int mlb=stoi(lb.substr(0, 2));
        int daa=stoi(aa.substr(3, 2));
        int dla=stoi(la.substr(3, 2));
        int dab=stoi(ab.substr(3, 2));
        int dlb=stoi(lb.substr(3, 2));
        int ans=0;
        vector<int> alice(365,0),bob(365,0);
        int p=0;
        for(int m=1;m<=12;m++){
            for(int d=1;d<=days[m];d++){
            if(m==maa && m==mla){
                if(d>=daa && d<=dla)alice[p]=1;
            }
            else{
                if((m==maa && d>=daa)||(m>maa && m<mla)||(m==mla && d<=dla))alice[p]=1;
            }
            if(m==mab && m==mlb){
                if(d>=dab && d<=dlb)bob[p]=1;
            }
            else{
                if((m==mab && d>=dab)||(m>mab && m<mlb)||(m==mlb && d<=dlb))bob[p]=1;
            }
            p++;
            }
        }
        for(int i=0;i<365;i++){
            if(alice[i]+bob[i]==2)ans++;
        }
        return ans;
    }
};