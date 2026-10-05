class Solution {
public:
    int bulbSwitch(int n) {
        return sqrt(n);
    }
};
// class Solution {
// public:
//     int fact(int x){
//         int ans=1;
//         int n=(x/2)+1;
//         for(int i=1;i<=n;i++){
//             if((x%i)==0)ans++;
//         }
//         return ans;
//     }
//     int bulbSwitch(int n) {
//         int ans=0;
//         for(int i=1;i<=n;i++){
//             int x=fact(i);
//             if(x%2==1)ans++;
//         }
//         return ans;
//     }
// };