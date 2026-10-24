class Solution {
public:
    int countDaysTogether(string aa, string la, string ab, string lb) {
        int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int maa=stoi(aa.substr(0, 2));
        int mla=stoi(la.substr(0, 2));
        int mab=stoi(ab.substr(0, 2));
        int mlb=stoi(lb.substr(0, 2));
        int daa=stoi(aa.substr(3, 5));
        int dla=stoi(la.substr(3, 5));
        int dab=stoi(ab.substr(3, 5));
        int dlb=stoi(lb.substr(3, 5));
        int ans=0;
        vector<int> alice;
        for(int i=0;i<12;i++){
            for(int j=0;j<days[i];j++){
                int m=i+1,d=j+1;
                if(m==maa && m==mla){
                    if(d>=daa && d<=dla)alice.push_back(1);
                    else alice.push_back(0);
                    continue;
                }
                if(m==maa && d>=daa)alice.push_back(1);
                else if(m>maa && m<mla)alice.push_back(1);
                else if(m==mla && d<=dla)alice.push_back(1);
                else alice.push_back(0);
            }
        }
        vector<int> bob;
        for(int i=0;i<12;i++){
            for(int j=0;j<days[i];j++){
                int m=i+1,d=j+1;
                if(m==mab && m==mlb){
                    if(d>=dab && d<=dlb)bob.push_back(1);
                    else bob.push_back(0);
                    continue;
                }
                if(m==mab && d>=dab)bob.push_back(1);
                else if(m>mab && m<mlb)bob.push_back(1);
                else if(m==mlb && d<=dlb)bob.push_back(1);
                else bob.push_back(0);
            }
        }
        for(int i=0;i<365;i++){
            if(alice[i]==1 && bob[i]==1)ans++;
        }
        return ans;
    }
};