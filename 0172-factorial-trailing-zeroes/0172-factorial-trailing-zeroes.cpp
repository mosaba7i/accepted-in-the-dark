int get_fact_five(int n)
{

    int five = 0;
    n++;
    while (--n)
    {
        if ( n % 5 == 0)
        {
            int num = n;
            while (num % 5 == 0 && num != 0)
            {
                five++;
                num = num / 5;
            }
        }
        
    }
    return(five);
}

class Solution {
public:
    int trailingZeroes(int n) {
        return(get_fact_five(n));
    }
};