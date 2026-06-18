class Solution {
public:
    double myPow(double x, int n) {
        double res = 1;
        if (x == 1)
        {
            return(1);
        }
        if (x == -1 && n % 2 == 0)
        {
            return(1);
        }
         if (x == -1 && n % 2 == 1)
        {
            return(-1);
        }
        if (n == 0)
            return(1);
        long long m = n;
         if (m < 0)
            m = m * -1;
        if (m >= 2147483648 && m % 2 == 0)
        {
            m = m /2;
            x = 2 * x;
        } 
        while (m--)
        {
            res = res * x;
        }
        if (n < 0)
            return(1/res);
        return(res);
    }
};