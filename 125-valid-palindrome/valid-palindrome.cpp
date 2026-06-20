class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        while (i < s.size())
        {
            if (s[i] >='A' && s[i] <='Z')
                s[i] += 32;
            if (!(s[i] >='a' && s[i] <='z') && !(s[i] >= '0' && s[i] <= '9'))
            {
                s.erase(s.begin() + i);
                continue;
            }
            i++;
        } //ready to compare
        string r;
        i = s.size() - 1;
        while (i >= 0)
        {
            r.push_back(s[i]);
            i--;
        }
        i = 0;
        while (i < s.size())
        {
            if (r[i] != s[i])
                return(false);
            i++;
        }
            return(true);

    }
};