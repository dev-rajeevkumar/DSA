class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> fres1(26,0);
        if(s2.size()<s1.size())
            return false;
        for(int i=0;i<s1.size();i++){
            fres1[s1[i]-'a']++;
        }
        for(int i=0;i<=s2.size()-s1.size();i++){
            vector<int> fres2(26,0);
            for(int j=i;j<i+s1.size();j++){
                fres2[s2[j]-'a']++;
            }
            if(fres1==fres2)
                return true;
            
        }
        return false;
    }
};
// class Solution {
// public:
//     bool checkInclusion(string s1, string s2) {
//         sort(s1.begin(),s1.end());
//         for(int i=0;i<s2.size();i++){
//             string temp=s2.substr(i,s1.size());
//             sort(temp.begin(),temp.end());
//             if(s1==temp)
//                 return true;
            
//         }
//         return false;
//     }
// };