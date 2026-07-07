class Solution {
public:
    bool isRectangleCover(vector<vector<int>>& rectangles) {
    sort(rectangles.begin(),rectangles.end());
    long long area=0;
    for(int i=0;i<rectangles.size();i++){
        long long a=1LL*abs(rectangles[i][0]-rectangles[i][2])*abs(rectangles[i][1]-rectangles[i][3]);
        area=area+a;
    }
    int xi=rectangles[0][0],yi=rectangles[0][1];
    int ai=rectangles[0][2],bi=rectangles[0][3];
    for(int i=0;i<rectangles.size();i++){
        if(rectangles[i][0]<xi)
            xi=rectangles[i][0];
        if(rectangles[i][1]<yi)
            yi=rectangles[i][1];
        if(rectangles[i][2]>ai)
            ai=rectangles[i][2];
        if(rectangles[i][3]>bi)
            bi=rectangles[i][3];
    }
    long long maxi=1LL*abs(ai-xi)*abs(bi-yi);
    if(area!=maxi)
        return false;
    for(int i=1;i<rectangles.size();i++){
        if(rectangles[i]==rectangles[i-1])return false;
    }
    int u=rectangles.size();
    for(int i=0;i<u;i++){
        int up1=rectangles[i][0],up2=rectangles[i][2];
        int lay1=rectangles[i][1],lay2=rectangles[i][3];
        for(int j=max(0,i-3);j<min(u,i+3);j++){
            if(i==j)continue;
            int x1=rectangles[j][0],x2=rectangles[j][2];
            int y1=rectangles[j][1],y2=rectangles[j][3];
            if((x1<up1 && up1<x2) && ((y1<=lay1&&lay1<y2)||(y1<lay2&&lay2<=y2)))return false; 
            if((x1<up2 && up2<x2) && ((y1<=lay1&&lay1<y2)||(y1<lay2&&lay2<=y2)))return false; 
            if((y1<lay1&&lay1<y2) && ((x1<=up1&&up1<x2)||(x1<up2&&up2<=x2)))return false; 
            if((y1<lay2&&lay2<y2) && ((x1<=up1&&up1<x2)||(x1<up2&&up2<=x2)))return false;
        }
    }
    return true;
    }
};