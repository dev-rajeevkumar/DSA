class Solution {
public:
    int numberOfSpecialChars(string word) {
        int total=0;
        for(int i=65;i<=90;i++){
            int count=0;
            int f=0;
            for(int j=0;j<word.size();j++){
                if(word[j]==i+32){
                    f=1;
                }
                if(word[j]==i && f==1){
                    count=1;
                }
                if(f==0 && word[j]==i){
                    break;
                }
                if(word[j]==i+32 && count==1 && f==1){
                    count=0;
                    break;
                }
            }
            total+=count;
        }
        return total;
    }
};