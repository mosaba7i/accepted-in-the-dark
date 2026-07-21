class Solution {
public:
    int differenceOfSums(int n, int m) {
        n++;
        int sum1 = 0;
        int sum2 = 0;
        while(n--)
           {
            if (n % m != 0)
              sum1 += n;
            else
             sum2 += n;
            }
         return (sum1 - sum2);
    }
};