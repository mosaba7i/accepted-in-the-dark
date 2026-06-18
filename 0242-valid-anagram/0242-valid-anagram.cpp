class Solution {
public:
    bool isAnagram(string s, string t) {
        int i = 0;
        int j = 0;
        int count  = 0;
        int size_met = s.size();
        int size_left = 0;
        while (i < s.size())
        {
            j = 0;
            while (j < t.size())
            {
                if (s[i] == t[j])
                {
                    count ++;
                    t.erase(t.begin()+ j);
                    break ;
                }
                else
                    j++;
            }
            i++;
        }
        size_left = t.size();
        if (count == size_met && size_left == 0 )
            return(true);
        return(false);
    }
};