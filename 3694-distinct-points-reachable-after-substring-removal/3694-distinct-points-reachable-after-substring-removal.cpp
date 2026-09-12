class Solution {
public:
    int distinctPoints(string s, int k) {
        int l=0,u=0,d=0,r=0;
        for(char x:s){
            if(x=='U')u++;
            if(x=='D')d++;
            if(x=='R')r++;
            if(x=='L')l++;
        }
        set<pair<int,int>> point;
        int wl=0,wu=0,wd=0,wr=0;
        for(int i=0;i<k;i++){
            char x=s[i];
            if(x=='U')wu++;
            if(x=='D')wd++;
            if(x=='R')wr++;
            if(x=='L')wl++;
        }
        for(int i=k;i<s.size();i++){
            point.insert({r-l+wr-wl,u-d+wu-wd});
            char p=s[i-k];
            if(p=='U')wu--;
            if(p=='D')wd--;
            if(p=='R')wr--;
            if(p=='L')wl--;
            char x=s[i];
            if(x=='U')wu++;
            if(x=='D')wd++;
            if(x=='R')wr++;
            if(x=='L')wl++;
        }
        point.insert({r-l+wr-wl,u-d+wu-wd});
        return point.size();
    }
};