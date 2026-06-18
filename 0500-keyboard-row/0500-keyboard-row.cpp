
int check_dic(string str ,char c)
{
    int s = str.size();
    int i = 0;
    if (c >= 'A' && c <= 'Z')
        c +=32;
    while (i < s)
    {
        if (c == str[i])
            return(1);
        i++;
    }
    return(0);
}
int check_full_dic(string str, string str2)
{
    int s = str2.size();
    int s2 = str.size();
    int i = 0;
    int enough = 0;
    while ( i < s)
    {
            if (check_dic(str,str2[i]))
                enough++;
            i++;
    }   
    if (enough == s)
        return(1);
    return(0);
}

int figure_row(string str)
{
    string r1 = "qwertyuiop";
    string r2 = "asdfghjkl";
    string r3 = "zxcvbnm";
    if (check_dic(r1 ,str[0]))
        return(check_full_dic(r1,str));
    if (check_dic(r2 ,str[0]))
        return(check_full_dic(r2,str));
    if (check_dic(r3 ,str[0]))
        return(check_full_dic(r3,str));
    return(0);

}
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> str;
        int s = words.size();
        int i =0;
        while (i < s)
        {
            if (figure_row(words[i]))
                str.push_back(words[i]);
            i++;
        }
        return(str);
    }
};