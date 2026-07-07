class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> key;
        for(int i = 0; i <s.size();i++)
            key[s[i]]++;
        for(auto i = key.begin();i != key.end();i++)
            if (key.begin()->second != (i->second))
                return(false);
        return(true);
    }
};