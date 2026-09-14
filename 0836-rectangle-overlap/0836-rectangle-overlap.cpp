class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        if(rec1==rec2)return true;
        int x1=rec1[0],x2=rec1[2];
        int y1=rec1[1],y2=rec1[3];
        int up1=rec2[0],up2=rec2[2];
        int lay1=rec2[1],lay2=rec2[3];
            // if((x1<=up1 && up1<x2) && ((y1<=lay1&&lay1<y2)||(y1<lay2&&lay2<=y2)))return true;
            // if((x1<up2 && up2<=x2) && ((y1<=lay1&&lay1<y2)||(y1<lay2&&lay2<=y2)))return true; 
            // if((y1<=lay1&&lay1<y2) && ((x1<=up1&&up1<x2)||(x1<up2&&up2<=x2)))return true;
            // if((y1<lay2&&lay2<=y2) && ((x1<=up1&&up1<x2)||(x1<up2&&up2<=x2)))return true;
            if(x2<=up1)return false;
            if(up2<=x1)return false;
            if(y1>=lay2)return false;
            if(y2<=lay1)return false;
        return true;
    }
};