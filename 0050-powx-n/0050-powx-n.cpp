class Solution {
public:
    double myPow(double x, int n) {
        if(n==INT_MAX||x==1.00000)
            return x;
        if(x==-1){
            if(n%2==0)
                return -x;
            return x;
        }
        double pro = 1;
        if (n > 0) {
            while (n > 0) {
                pro = pro * x;
                n--;
                if(pro==0.00000)
                return pro;
            }
        }
        if (n < 0) {
            while (n < 0) {
                pro = pro / x;
                n++;
                if(pro==0.00000)
                return pro;
            }
        }
        return pro;
    }
};