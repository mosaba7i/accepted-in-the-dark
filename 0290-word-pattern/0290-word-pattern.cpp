class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> key;
         unordered_map<string,char> key2;
        int i = 0;
        int j = 0;
        int k = 0;
        string tmp;
        while (pattern[i] && s[j])
        {
            if(s[j] && s[j] == ' ')
                    j++;
                k = j;
                while (s[j] && s[j] != ' ')
                    j++;
            if(key.find(pattern[i]) == key.end() && key2.find(s.substr(k, j-k)) == key2.end())
            {   
                key[pattern[i]] =  s.substr(k, j-k);
                key2[s.substr(k, j-k)] =  pattern[i];
            }
            else if (key[pattern[i]] == s.substr(k, j-k))
                {
                    i++;
                    continue;
                }
            else
                return(false);
            i++;
        }
        if (s[j]) // if there are letters left that means num of words are bigger than the num of letters so wrong 
            return(false);
        if (i< pattern.size()) // if i < patter.size that means num of patterns are bigger than the num of words
            return(false);
        return(true); 
    }
};