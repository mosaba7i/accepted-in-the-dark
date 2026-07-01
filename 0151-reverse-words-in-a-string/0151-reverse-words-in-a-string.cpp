//less noise more optimized :p
class Solution {
public:
    string reverseWords(string s) {
       int i = s.size() - 1;
       int j = 0;
       string str;
       while(i >= 0)
       {
        while (i >= 0 && s[i] == ' ' )
            i--;
        if (i == -1)
            break;
        j = i;
        while (i >= 0 && s[i] != ' ' )
            i--;
        if(!str.empty())
            str+=' ';
        str += s.substr(i+1,j-i);
       }
        return(str);
    }
};