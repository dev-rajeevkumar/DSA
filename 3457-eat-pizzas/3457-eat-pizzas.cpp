class Solution {
public:
    long long maxWeight(vector<int>& pizzas) {
        sort(pizzas.rbegin(),pizzas.rend());
        long long ans=0;
        int n=pizzas.size()/4;
        int x=(n+1)/2;
        for(int i=0;i<x;i++)ans+=pizzas[i];
        n=n-x;
        x++;
        while(n>0){
            ans+=pizzas[x];
            x+=2;
            n--;
        }
        return ans;
    }
};