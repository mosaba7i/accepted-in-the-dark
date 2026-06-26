//Fibonacci babyyyy 
class Solution {
public:
    int climbStairs(int n) {
        int i = 2;
        vector <int> sum;
        sum.push_back(1);
        sum.push_back(1);
        while (i <= n)
        {
            sum.push_back(sum[i-1] + sum[i-2]);
            i++;
        }
        return(sum[n]);
    }
};