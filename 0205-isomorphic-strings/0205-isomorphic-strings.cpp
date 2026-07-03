// update -> less code
// used count for less code
// rem useless checks 
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> key;
         unordered_map<char,char> key2;
        int i = 0;
        string tmp;
        while (i < s.size())
        {
           if (!key.count(s[i]) && !key2.count(t[i]))
            {   
                key[s[i]] =  t[i];
                key2[t[i]] =  s[i];
            }
            else if (key.count(s[i]) && key[s[i]] == t[i])
                {
                    i++;
                    continue;
                }
            else
                return(false);
            i++;
        }
        return(true); 
    }
};