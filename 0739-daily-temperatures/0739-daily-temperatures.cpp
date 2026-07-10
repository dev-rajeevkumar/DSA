class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        for(int i=0;i<n;i++){
            int x=0;
            int flag=0;
            int prev;
            if(i>0 && temperatures[i]==prev){
                prev=temperatures[i];
                temperatures[i]=max(0,temperatures[i-1]-1);
                continue;
            }
            for(int j=i+1;j<n;j++){
                if(temperatures[j]<=temperatures[i]){
                    x++;
                }
                else{
                    x++;
                    flag=1;
                    break;
                }
            }
            prev=temperatures[i];
            if(flag==1){
                temperatures[i]=x;
            }
            else temperatures[i]=0;
        }
        return temperatures;
    }
};