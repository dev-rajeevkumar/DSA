class Solution {
public:
    int divide(int dividend, int divisor) {
        int count=0;
        if((dividend<0 && divisor<0)||(dividend>0 && divisor>0)){
            if(divisor==INT_MIN){
                if(dividend==INT_MIN)
                    return 1;
                return 0;
            }
            if(dividend==INT_MIN){
                if(divisor==-1)
                    return INT_MAX;
                dividend=dividend-divisor;
                count++;
            }
            int d=abs(dividend);
            int di=abs(divisor);
            while(d>=di){
                d=d-di;
                count++;
        }
            if((dividend<0 && divisor<0)||(dividend>0 && divisor>0))
                return count;
            return -count;
        }

        if(dividend==INT_MIN){
            if(divisor==1)
                return dividend;
            dividend+=abs(divisor);
            count++;
        }
        if(divisor==INT_MIN){
            if(dividend==INT_MIN)
                return 1;
            return 0;
        }
        if(dividend==INT_MAX){
            if(divisor==-1)
                return -INT_MAX;
        }
        int d=abs(dividend);
        int di=abs(divisor);
        while(d>=di){
            d=d-di;
            count++;
        }
        // if((dividend<0 && divisor<0)||(dividend>0 && divisor>0))
        //  return count;
        return -count;
    }
};