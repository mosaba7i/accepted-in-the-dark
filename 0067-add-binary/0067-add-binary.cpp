class Solution {
public:
    string addBinary(string a, string b) {
        int bits = max(a.size(),b.size());
        int as = a.size();
        int bs = b.size();
        while (as < bs)
        {
            a = '0' + a;
            as++;
        }
         while (bs < as)
        {
            b = '0' + b;
            bs++;
        }
         string res;
         int c = 0;
         int i = 0;
         i = bits - 1;
        while (i >= 0)
        {
            int n1 = (a[i] - '0');
            int n2 = (b[i] - '0');
            if (n1 + n2 + c == 2)
            {
                res.push_back('0');
                c = 1;
            }
            else if (n1 + n2 + c == 3)
            {
                res.push_back('1');
                c = 1;
            }
            else
                {
                    res.push_back(( n1 + n2 + c ) + '0');
                    c = 0;
                }
           
            i--;
        } 
       if (c==1)
        res.push_back('1');
        reverse(res.begin(), res.end());
        
        return(res);
    }
};