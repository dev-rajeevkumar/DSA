class Solution {
public:
    string sortVowels(string s) {
    string u="";
    for(char c : s){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            int flag=1;
            for(char x:u){
                if(x==c){
                    flag=0;
                    break;
                }
            }
            if(flag)u+=c;
        }
    }
    vector<int> f(26,0);
    for(char c : s)
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')f[c-'a']++;
    string ans="";
    int mx = 0;
    for(int x:f)mx=max(mx,x);
    while(mx){
        for(char c:u){
            if(f[c-'a']==mx){
                while(f[c-'a']--)ans+=c;
            }
        }
        mx=0;
        for(int x:f)mx=max(mx,x);
    }
    int a=0;
    for(int i=0;i<s.size();i++){
        char c=s[i];
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            s[i]=ans[a];
            a++;
        }
    }
    return s;
    }
};