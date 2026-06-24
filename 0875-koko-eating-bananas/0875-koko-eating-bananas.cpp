class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long sum=0;
        for(int x:piles) sum+=x;
        int a=sum/h;
        if(a==0) a=1;
        while(1){
            int t=h;
            for(int i=0;i<piles.size();i++){
                int x=piles[i]/a;
                if((piles[i]%a)>0) x++;
                t=t-x;
            }
            if(t==0)break;
            if(t<0){
                a++;
                continue;
            }
            if(t>0){
                break;
            }
        }
        return a;
    }
};