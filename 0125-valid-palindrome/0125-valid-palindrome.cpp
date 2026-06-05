class Solution {
public:
    bool isPalindrome(string s) {
        for(int i=0;i<s.size();i++){
            if(isupper(s[i]))
                s[i] = tolower(s[i]);
            if(!(islower(s[i]) || isdigit(s[i]))){
                s.erase(i,1);
                i--;
            }      
        }
        int left=0;
        int right=s.size()-1;
        while(left<right){
            if(s[left]!=s[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
};