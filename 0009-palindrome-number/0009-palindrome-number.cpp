
void ft_putnbr(int x, vector<int> &n)
{
    if (x>=10)
        ft_putnbr(x/10,n);
    x = x % 10;
    n.push_back(x);
}
class Solution {
public:
    bool isPalindrome(int x) {
        vector <int> n;
        vector <int> rn;
        if (x < 0)
            return(false);
        ft_putnbr(x,n);
        int i = n.size() - 1;
        while (i >= 0)
        {
            rn.push_back(n[i]);
            i--;
        }
        i = 0;
        while (i < n.size())
        {
            if (n[i] != rn[i])
                return(false);
            i++;
        }
        return(true);
    }
};