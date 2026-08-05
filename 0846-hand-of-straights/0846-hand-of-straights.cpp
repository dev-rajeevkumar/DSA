class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int k) {
        sort(hand.begin(),hand.end());
        int n=hand.size();
        if(n%k!=0)return false;
        int t=n/k;
        while(t--){
            int g=0;
            int prev=INT_MAX;
            for(int x:hand){
                if(x>=0)prev=min(prev,x);
            }
            if(prev==INT_MAX)return false;
            for(int i=0;i<n;i++){
                if(g==k)break;
                if(hand[i]==prev && hand[i]>=0){
                    prev++;
                    hand[i]=-1;
                    g++;
                }
            }
            if(g<k)return false;
        }
        return true;
    }
};