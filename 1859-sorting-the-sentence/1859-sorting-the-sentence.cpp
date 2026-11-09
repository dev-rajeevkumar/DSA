class Solution {
public:
    string sortSentence(string s) {
        vector<pair<int,string>> a;
        string t="";
        for(char x:s){
            if(x==' ')continue;
            if(isdigit(x)){
                a.push_back({x-'0',t});
                t="";
            }
            else{
                t.push_back(x);
            }
        }
        sort(a.begin(),a.end());
        s="";
        for(int i=0;i<a.size();i++){
            s+=a[i].second+" ";
        }
        s.pop_back();
        return s;
    }
};