class Solution {
public:
    int numberOfSpecialChars(string word) {
        int total=0;
        for(int i=65;i<=90;i++){
            int count=0;
            int s=0,c=0;
            for(int j=0;j<word.size();j++){
                if(word[j]==i+32){
                    s=1;
                }
                if(word[j]==i){
                    c=1;
                }
                if(word[j]==i && s==1){
                    count=1;
                    break;
                }
                if(word[j]==i+32 && c==1){
                    count=1;
                    break;
                }
            }
            total+=count;
        }
        return total;
    }
};