
void ft_putnbr(int n,vector<char> &c)
{
    
    if (n >= 10)
        ft_putnbr(n/10,c);
    n = n % 10;
    c.push_back(n + '0');
}

string vc2s (vector<char> c )
{
    int s = c.size();
    string str;
    int i = 0;
    while (i < s)
    {
        str.push_back(c[i]);
        i++;
    }
    return(str);
}
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> s;
        
        int i = 1;
        while (i <= n)
        {
        if (i % 3 == 0 && i % 5 == 0)
            s.push_back("FizzBuzz");
        else if (i % 3 == 0)
            s.push_back("Fizz");
        else if (i % 5 == 0)
            s.push_back("Buzz");
        else
        {
            vector<char> c;
            ft_putnbr(i,c);
            s.push_back(vc2s(c));
        }
        i++;
        }
        return(s);

    }
};