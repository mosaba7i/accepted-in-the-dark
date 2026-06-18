
class Solution {
public:
    int mySqrt(int x) {
        if (x == 1 || x == 0)
            return(x);
         long long i = 0;
        while (i <= x)
        {
            if ((i * i) >= floor(x/2))
            {
                if ((i * i) == (x))
                    return(i);
                if ((i * i) > (x))
                    return(i-1);
            }
                
            i++;
        }
        return(0);
    }
};