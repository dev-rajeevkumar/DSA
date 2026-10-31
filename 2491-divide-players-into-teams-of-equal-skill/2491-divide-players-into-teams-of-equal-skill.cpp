class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        long long ans=0;
        int a=0,b=skill.size()-1;
        sort(skill.begin(),skill.end());
        int ch=skill[a]+skill[b];
        while(a<=b){
            if((skill[a]+skill[b])==ch)ans+=1LL*(skill[a]*skill[b]);
            else break;
            a++;
            b--;
        }
        if(a<b)return -1;
        return ans;
    }
};