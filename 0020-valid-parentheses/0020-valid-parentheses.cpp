// ( - ) = -1
// [ - ] = - 2
// { - } = - 2
class Solution {
public:
    bool isValid(string s) {
        int i = 0;
        int n = s.size();
        string c;
        while ( i < n)
        {
            if (c.empty())
                {
                    c.push_back(s[i]);
                    i++;
                }
            if ((s[i] - c[c.size() - 1] == 1) || (s[i] - c[c.size() - 1] == 2))
                c.pop_back();
            else if (s[i] == '['|| s[i] ==  '(' || s[i] =='{')
                c.push_back(s[i]);
            else
                return(false);
            i++;
                
        }
         if (c.empty())
            return(true);
        return(false);
        
    }
};