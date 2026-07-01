//optimized (less larping :p)
class Solution {
public:
    int lengthOfLastWord(string s) {
       int i = s.size() - 1;
       int size = 0;
        while(i >= 0 && s[i] == ' ')
            i--;
        if ( i == -1)
            return(0);
        while(i >= 0 && s[i] != ' ')
        {
            size++;
            i--;
        }
        return(size);
    }
};