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
            if(key.find(pattern[i]) != key.end() && key[pattern[i]] != word ||  ((key2.find(word) != key2.end()) && ((key2[word] != pattern[i]))) )
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