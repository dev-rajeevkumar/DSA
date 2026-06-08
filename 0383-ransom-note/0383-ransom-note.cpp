class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> fre(26, 0);
        for(int i=0;i<magazine.size();i++){
            fre[magazine[i]-'a']++;
        }
        for(int i=0;i<ransomNote.size();i++){
            if(fre[ransomNote[i]-'a']==0)
                return false;
            fre[ransomNote[i]-'a']--;
        }
        return true;
    }
};