class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int n=people.size();
        int x=0,y=n-1;
        int ans=0;
        int sum=0;
        while(x<=y){
            sum+=people[y];
            y--;
            if((sum+people[x])<=limit)x++;
            sum=0;
            ans++;
        }
        return ans;
    }
};