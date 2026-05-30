class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int a=flowerbed.size();
        int c=0;
        if(n==0)
            return true;
        if(a==1)
        {
            if(flowerbed[0]==0&&n==1){
                return true;
            }
            return false;
        }
        if(flowerbed[0]==0&&flowerbed[1]==0){
            flowerbed[0]=1;
            c++;
        }
        for(int i=1;i<a-1;i++){
           if(flowerbed[i-1]==0&&flowerbed[i]==0&&flowerbed[i+1]==0){
            flowerbed[i]=1;
            c++;
           }
        }
        if(flowerbed[a-1]==0&&flowerbed[a-2]==0){
            flowerbed[a-1]=1;
            c++;
        }
        if(n<=c)
            return true;
        return false;
    }
};