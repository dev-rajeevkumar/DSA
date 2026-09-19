class Solution {
public:
    double distance(int x1, int y1, int x2, int y2) {
        return sqrt(1LL * (x2 - x1) * (x2 - x1) +1LL * (y2 - y1) * (y2 - y1));
    }
    bool checkOverlap(int radius, int xc, int yc, int x1, int y1, int x2, int y2) {
            if(x1<=xc && xc<=x2 && y1<=yc && yc<=y2)return true;
            double d1 = distance(xc,yc,x1,y1);
            double d2 = distance(xc,yc,x2,y2);
            double d3 = distance(xc,yc,x2,y1);
            double d4 = distance(xc,yc,x1,y2);
            int lay= max(x1, min(x2, xc));
            int up= max(y1, min(y2, yc));
            double a1 = distance(xc,yc,lay,y1);
            double a2 = distance(xc,yc,lay,y2);
            double a3 = distance(xc,yc,x2,up);
            double a4 = distance(xc,yc,x1,up);
            if(d1>radius && d2>radius && d3>radius && d4>radius &&a1>radius && a2>radius && a3>radius && a4>radius)return false;
            
        return true;
    }
};