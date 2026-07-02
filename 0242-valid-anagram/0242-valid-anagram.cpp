//update 2 -> (optimized) :p
// used unordered_map (easier and more readable)
// the fun part is a simple == comp can do the sol XDD
class Solution {
public:
    bool isAnagram(string s, string t) {
       unordered_map<char,int> ana;
       unordered_map<char,int> word;
       for(int i = 0; i < t.size();i++)
       {
            if (ana.find(t[i]) != ana.end())
                ana[t[i]]++;
            else
                ana[t[i]] = 1;
       }
       for(int i = 0; i < s.size();i++)
       {
            if (word.find(s[i]) != word.end())
                word[s[i]]++;
            else
                word[s[i]] = 1;
       }
        if(ana == word)
            return(true);
        return(false);
    }
};