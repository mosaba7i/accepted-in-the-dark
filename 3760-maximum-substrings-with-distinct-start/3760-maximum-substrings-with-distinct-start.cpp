class Solution {
public:
    int maxDistinct(string s) {
        unordered_set <int> key;
        int count = 0;
        for(int i = 0;i < s.size();i++)
        {
            if(key.count(s[i]))
                count--;
            key.insert(s[i]);
            count++;
        }
        return(count);
    }
};