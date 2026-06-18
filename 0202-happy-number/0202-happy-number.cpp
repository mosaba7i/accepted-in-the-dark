int check_dup_loop(vector <int> &d)
{
    int s = d.size();
    int i = 0;
    int j = 0;
    while  (i < s)
    {
        j = 0;
        while (j < s)
        {
            if (i != j)
            if (d[i] == d[j])
                return(1);
            j++;
        }
        i++;
    }
    return(0);
}
void ft_putnbr (int n,vector <int> &d)
{
    if (n >= 10)
        ft_putnbr(n/10,d);
        n = n % 10;
       d.push_back(n); 

}

int cycle(vector <int> &d,vector <int> &d2)
{
    int i = 0;
    int s = d.size();
    int sum = 0;
    while (i < s)
    {
        sum = pow(d[i],2) + sum;
        i++;
    }
    if (check_dup_loop(d2))
        return(0);
    d2.push_back(sum);
    if (sum == 1)
        return(1);
        int m = 0;
        while ( m < s)
            {
                d.pop_back();
                m++;
            }
        
        ft_putnbr(sum,d);
        return(cycle(d,d2));


}

class Solution {
public:
    bool isHappy(int n) {
        vector <int> d;
        vector <int> d2;
         ft_putnbr(n,d);
         int sum2 = 0;
        return(cycle(d,d2));
    }
};