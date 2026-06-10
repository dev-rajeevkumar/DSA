class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string x=a;
        int m=1;
        while(a.size()<=b.size()){
            if((a.size()==b.size()) && a==b){
                return m;
            }
            a=a+x;
            m++;
        }
        for(int i=0;i<a.size();i++){
            if(a.compare(i, b.size(), b) == 0)
                return m;
        }
        a=a+x;
        m++;
         for(int i=0;i<a.size();i++){
            if(a.compare(i, b.size(), b) == 0)
                return m;
        }
        return -1;
    }
};