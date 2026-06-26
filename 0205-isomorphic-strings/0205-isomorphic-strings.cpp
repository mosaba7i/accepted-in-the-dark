class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> key;
         unordered_map<char,char> key2;
        int i = 0;
        string tmp;
        while (s[i] && t[i])
        {
            if(key.find(s[i]) == key.end() && key2.find(t[i]) == key2.end())
            {   
                key[s[i]] =  t[i];
                key2[t[i]] =  s[i];
            }
            else if (key[s[i]] == t[i])
                {
                    i++;
                    continue;
                }
            else
                return(false);
            i++;
        }
        if (t[i] || s[i]) // if there are letters left that means either the s.size() > t.size() or the other way around and that would be always false
            return(false);
        return(true); 
    }
};