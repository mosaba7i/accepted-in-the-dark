int get_char_value(char s,char s2,int *i)
{
    if (s2 == 'N')
    {
    if (s == 'I')
        return(1);
    if (s == 'V')
        return(5);
    if (s == 'X')
        return(10);
    if (s == 'L')
        return(50);
    if (s == 'C')
        return(100);
    if (s == 'D')
        return(500);
    if (s == 'M')
        return(1000);
    }
    else if (s2)
    {
    if (s == 'I' && s2 =='V')
        return(*i = *i + 1,4);
    if (s == 'I' && s2 =='X')
        return(*i = *i + 1,9);
    if (s == 'X' && s2 =='L')
        return(*i = *i + 1,40);
    if (s == 'X' && s2 =='C')
        return(*i = *i + 1,90);
    if (s == 'C' && s2 =='D')
        return(*i = *i + 1,400);
    if (s == 'C' && s2 =='M')
        return(*i = *i + 1,900);
    else
    {
    if (s == 'I')
        return(1);
    if (s == 'V')
        return(5);
    if (s == 'X')
        return(10);
    if (s == 'L')
        return(50);
    if (s == 'C')
        return(100);
    if (s == 'D')
        return(500);
    if (s == 'M')
        return(1000);
    }
    }
    return(0);
}
int get_string_value(string s)
{
    string s1 = s;
    int i = 0;
    int sum = 0;
    while (s1[i])
    {
        if (s1[i] && s1[i+1])
            sum = get_char_value(s1[i],s1[i + 1],&i) + sum;
        else if (s1[i] && !s[i+1])
            sum = get_char_value(s1[i],'N',&i) + sum;
        i++;
    }
    return (sum);
}
class Solution {
public:
    int romanToInt(string s) {
        return(get_string_value(s));
    }
};