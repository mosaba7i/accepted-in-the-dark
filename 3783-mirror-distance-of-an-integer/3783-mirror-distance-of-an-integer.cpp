class Solution {
public:
    int mirrorDistance(int n) {
         int rev = 0;
    for(int m = n;m;m/=10)
        rev = (rev * 10) + (m % 10);
        return (abs(n - rev));
    }
};