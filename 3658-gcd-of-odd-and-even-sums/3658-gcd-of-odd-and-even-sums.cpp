class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd = 0;
        int sumEven = 0;
        int i = 1;
        while(i <= 2*n)
        {
            if(i % 2 == 0)
                sumEven += i;
            else
                sumOdd += i;
            i++;
        }
        return(gcd(sumOdd,sumEven));
    }
};