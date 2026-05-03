class Solution {
public:
string rotate(string a){
    int s=a.size();
    string n=a.substr(1,s-1);
    n=n+a[0];
    return n;
    
}
    bool rotateString(string s, string goal) {
        string a=rotate(s);
        for(int i=0;i<s.size();i++) {
            if(a==goal)
                return true;
            a=rotate(a);
        }
        return false;
    }
};