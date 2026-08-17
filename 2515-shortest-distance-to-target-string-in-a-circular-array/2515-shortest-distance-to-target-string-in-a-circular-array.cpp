class Solution {
public:
    int closestTarget(vector<string>& words, string target, int si) {
        int n=words.size();
        if(words[si]==target)return 0;
        int r=1,l=1;
        int i=si+1;
        if(i==n)i=0;
        while(i!=si){
            if(words[i]==target) break;
            r++;
            i++;
            if(i==n)i=0;
        }
        i=si-1;
        if(i==-1)i=n-1;
         while(i!=si){
            if(words[i]==target) break;
            l++;
            i--;
            if(i==-1)i=n-1;
        }
        if(l==n&&r==n)return -1;
        return min(r,l);
    }
};