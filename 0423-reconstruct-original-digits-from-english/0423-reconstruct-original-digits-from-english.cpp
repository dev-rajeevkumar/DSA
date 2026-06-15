class Solution {
public:
    string originalDigits(string s) {
        vector<int> f(26,0);
        for(int i=0;i<s.size();i++) f[s[i]-'a']++;
        string ans="";
        while(f['z'-'a']!=0){
            ans+="0";
            f['z'-'a']--;
            f['e'-'a']--;
            f['r'-'a']--;
            f['o'-'a']--;
        }
        while(f['w'-'a']!=0){
            ans+="2";
            f['t'-'a']--;
            f['w'-'a']--;
            f['o'-'a']--;
        }
        while(f['u'-'a']!=0){
            ans+="4";
            f['f'-'a']--;
            f['o'-'a']--;
            f['u'-'a']--;
            f['r'-'a']--;
        }
        while(f['x'-'a']!=0){
            ans+="6";
            f['s'-'a']--;
            f['i'-'a']--;
            f['x'-'a']--;
        }
        while(f['g'-'a']!=0){
            ans+="8";
            f['e'-'a']--;
            f['i'-'a']--;
            f['g'-'a']--;
            f['h'-'a']--;
            f['t'-'a']--;
        }
        while(f['o'-'a']!=0){
            ans+="1";
            f['o'-'a']--;
            f['n'-'a']--;
            f['e'-'a']--;
        }
        while(f['f'-'a']!=0){
            ans+="5";
            f['f'-'a']--;
            f['i'-'a']--;
            f['v'-'a']--;
            f['e'-'a']--;
        }
        while(f['h'-'a']!=0){
            ans+="3";
            f['t'-'a']--;
            f['h'-'a']--;
            f['r'-'a']--;
            f['e'-'a']--;
            f['e'-'a']--;
        }
        while(f['i'-'a']!=0){
            ans+="9";
            f['n'-'a']--;
            f['i'-'a']--;
            f['n'-'a']--;
            f['e'-'a']--;
        }
        while(f['s'-'a']!=0){
            ans+="7";
            f['s'-'a']--;
            f['e'-'a']--;
            f['v'-'a']--;
            f['e'-'a']--;
            f['n'-'a']--;
        }
        string out="";
        for(int i=0+'0';i<10+'0';i++){
            for(int j=0;j<ans.size();j++){
                if(i==ans[j])
                    out+=ans[j];
            }
        }
        return out;
    }
};