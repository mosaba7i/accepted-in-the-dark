class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        int bits = 0;
        int  i = 0;
        bits = floor(log2(n)) + 1; // log2(11) ~= 4 , 11 in bits = 1011
        while (i < bits)
        {
            if(n & (1 << i))
                count++;
            i++;
        }
        return(count);
    }
};