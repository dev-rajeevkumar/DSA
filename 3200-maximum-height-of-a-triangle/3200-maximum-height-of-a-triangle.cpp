class Solution {
public:
    int maxHeightOfTriangle(int r, int b) {
       int ans=0;
    //    int a=min(red,blue),b=max(red,blue);
       int x=0,y=0;
       for(int i=1;i<100;i++){
            if(i%2==1)x+=i;
            else y+=i;
            
            if((x<=r && y<=b)||(x<=b && y<=r)){
                ans++;
            }
            else break;
       } 
       return ans;
    }
};