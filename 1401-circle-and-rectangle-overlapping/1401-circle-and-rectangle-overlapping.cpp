class Solution {
public:
    double distance(int x1,int y1,int x2,int y2){
        return sqrt((x2-x1)* (x2-x1)+(y2-y1)*(y2-y1));
    }
    bool checkOverlap(int radius, int xc, int yc, int x1, int y1, int x2, int y2) {
            if(x1<=xc && xc<=x2 && y1<=yc && yc<=y2)return true;
            int lay= max(x1,min(x2,xc));
            int up= max(y1,min(y2,yc));
            if(distance(xc,yc,lay,y1)>radius && distance(xc,yc,lay,y2)>radius && distance(xc,yc,x2,up)>radius && distance(xc,yc,x1,up)>radius)return false;
        return true;
    }
};