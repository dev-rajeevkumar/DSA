class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n=moves.size();
        int l=0,r=0;
        for(int i=0;i<n;i++){
            if(moves[i]=='L'){
                l--;
            }
            else
               l++;
        }
        for(int i=0;i<n;i++){
            if(moves[i]=='R'){
                r--;
            }
            else
                r++;
        }
        if(abs(l)>abs(r))
            return abs(l);
        return abs(r);
    }
};