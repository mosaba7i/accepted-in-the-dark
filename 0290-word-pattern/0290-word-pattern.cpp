//optimized (using sttingstream for skipping whitespaces because it treats them as tokens and tokens are raw string with no space)
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> key;
        unordered_map<string,char> key2;
        stringstream stream(s);
        string word;
        int i = 0;
        int word_count = 0;
        while (stream >> word)
        {
              if (i >= pattern.size())
                return false;
            bool pattern_dont_match = key.count(pattern[i]) && key[pattern[i]] != word;
            bool word_dont_match = (key2.count(word)) && (key2[word] != pattern[i]);
            if(pattern_dont_match || word_dont_match)
                return (false);

            key[pattern[i]] = word;
            key2[word] = pattern[i];
            i++;
            word_count++;
        }
         if (word_count != pattern.size())
            return(false);
        return(true); 
    }
};