int compare(string s1,string s2)
{
    int i = 0;
    while (s1[i] == s2[i] && s1[i] && s2[i])
            i++;
    return(i);
}
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int s = strs.size();
        if (s == 0)
            return("");
        if  (s== 1)
            return(strs[0]);
        int i = 1;
        string s1 = strs[0];
        int ls = 201;
        while (i < s)
        {
           if (compare(s1,strs[i]) < ls)
                ls = compare(s1,strs[i]);
            i++;
        }
        if (ls == 201 || ls == 0)
            return("");
         i = 0;
         string s2;
         while (i < ls)
         {
            s2.push_back(s1[i]);
            i++;
         }
         return(s2);
    }
};