class Solution {
public:
    string reverse(string t){
        int i=0;
        int j=t.size()-1;
        while(i<j){
            swap(t[i],t[j]);
            i++;
            j--;
        }
        return t;
    }
    string reverseWords(string s) {
        string ans="";
        string temp="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                temp=reverse(temp);
                ans+=temp+' ';
                temp="";
            }
            else
                temp+=s[i];
        }
        temp=reverse(temp);
        ans+=temp;
        return ans;
    }
};