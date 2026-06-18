int get_lenght_last_word(string s)
{
    int i = 0;
    while (s[i])
    {
        i++;
    }
    i--;
    while (s[i] == ' ')
        i--;
    while (s[i] != ' ' && i > -1)
    {
        i--;
        if (i == -1)
            {
                i++;
                break ;
            }
    }
    if (s[i] == ' ')
        i++;
    int k = 0;
    while (s[i] && !(s[i] == ' '))
    {
        i++;
        k++;
    }
    return(k);
}
class Solution {
public:
    int lengthOfLastWord(string s) {
        return(get_lenght_last_word(s));
    }
};