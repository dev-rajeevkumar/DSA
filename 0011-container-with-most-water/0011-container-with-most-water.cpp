class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int max=0;
        int i=0;
        int j=n-1;
        int m=0;
        int water=0;
        while(i!=j){
            m=min(height[i],height[j]);
            water=m*abs(j-i);
            if(water>max)
                max=water;
            if(height[i]>height[j])
                j--;
            else
                i++;
        }
        return max;
    }
};