
class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        string str;
        while (s[i])
            i++;
        i--;
        int j = 0;
        while (i >= 0)
        {

            while (i >= 0 && (s[i] == ' ' || s[i] == 9 ) )
                i--;
            if (i < 0)
             break ;
            while (i >= 0 && s[i] && (s[i] != ' ' && s[i] != 9 ))
                i--; // points now to a space
                j = i + 1;
            if (!str.empty())
                str.push_back(' ');
            while (j >= 0 && s[j] && (s[j] != ' ' && s[j] != 9)  )
            {
                str.push_back(s[j]);
                j++;
            }
            
                
            
        }
        return(str);
    }
};