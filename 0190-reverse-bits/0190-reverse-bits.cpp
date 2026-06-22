class Solution {
public:
    int reverseBits(int n) {

        int l = 31;
        int r = 0;
        int lb,rb =0;
        while (r < l)
        {
            lb = (n >> l) & 1;
            rb = (n >> r) & 1;
            if (rb != lb)
            {
                n ^= (1 << l);
                n ^= (1 << r);
            }
            l--;
            r++;
        }
        return(n);
    }
};