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
        string s1 = strs[0];
        int cmnstr = 201;
        for(int i = 1; i < s;i++)
        {
            int comp = compare(s1,strs[i]);
            if ( comp < cmnstr)
                cmnstr = comp;
        }
        if (cmnstr == 201 || cmnstr == 0)
            return("");
       string s2;
       for(int i = 0; i < cmnstr;i++)
            s2.push_back(s1[i]);
         return(s2);
    }
};