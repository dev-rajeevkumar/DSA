class Solution {
public:
    bool palin(string a){
        int i=0;
        int j=a.size()-1;
        while(i<j){
            if(a[i]!=a[j])
                return false;
            i++;
            j--;
        }
            return true;
    }
    string longestPalindrome(string s) {
        string ans="";
        // odd
        int x=0;
        for(int i=0;i<s.size();i++){
            string temp="";
            while((i-x)>=0 && (i+x)<s.size()){
                if(palin(s.substr(i-x,x+x+1))){
                    temp=s.substr(i-x,x+x+1);
                    x++;
                    continue;
                }
                break;
            }
            if(temp.size()>ans.size())
                ans=temp;
        }
        // even
        x=0;
        for(int i=0;i<s.size();i++){
            string temp="";
            while((i-x)>=0 && (i+1+x)<s.size()){
                if(palin(s.substr(i-x,x+x+2))){
                    temp=s.substr(i-x,x+x+2);
                    x++;
                    continue;
                }
                break;
            }
            if(temp.size()>ans.size())
                ans=temp;
        }
        return ans;
    }
};