class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map <char,int> key;
        int count = 0;
        for(int i = 0; i < t.size();i++)
            key[t[i]]++;
        for(int i = 0; i < s.size();i++)
        {
            if (key.count(s[i]) && key[s[i]] > -1)
                key[s[i]]--;
            if (key.count(s[i]) && key[s[i]] <= -1)
                count++;
            else if (!key.count(s[i]))
                count++;
            
        }
        return(count);
    }
};