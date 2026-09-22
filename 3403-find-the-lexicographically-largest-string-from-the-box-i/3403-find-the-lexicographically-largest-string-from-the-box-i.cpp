class Solution {
public:
    string answerString(string word, int num) {
        if(num==1)return word;
        int n=word.size()-num+1;
        string ans="";
        for(int i=0;i<word.size();i++){
            if(word.substr(i,n)>ans)
                ans=word.substr(i,n);
        }
        return ans;
    }
};