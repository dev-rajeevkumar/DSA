class Solution {
public:
    vector<double> internalAngles(vector<int>& sides) {
        vector<double> angle;
        double a=sides[0],b=sides[1],c=sides[2];
        if(a + b <= c||b + c <= a||a + c <= b)
            return angle;
        double x=0.00000,y=0.00000,z=0.00000;
        double p=0.00000,q=0.00000,r=0.00000;
        p=(double)((b*b)+(c*c)-(a*a))/(2*b*c);
        q=(double)((c*c)+(a*a)-(b*b))/(2*a*c);
        r=(double)((b*b)+(a*a)-(c*c))/(2*a*b);
        p = min(1.0, max(-1.0, p));
        q = min(1.0, max(-1.0, q));
        r = min(1.0, max(-1.0, r));
        x=acos(p);
        y=acos(q);
        z=acos(r);
        x=x*180/M_PI;
        y=y*180/M_PI;
        z=z*180/M_PI;
        if(x>=y&&x>=z){
            angle.push_back(min(y,z));
            angle.push_back(max(y,z));
            angle.push_back(x);
        }
        else if(y>=x&&y>=z){
            angle.push_back(min(x,z));
            angle.push_back(max(x,z));
            angle.push_back(y);
        }
        else if(z>=x&&z>=y){
            angle.push_back(min(y,x));
            angle.push_back(max(y,x));
            angle.push_back(z);
        }
        return angle;
    }
};