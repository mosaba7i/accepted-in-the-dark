
int get_index(string haystack, string needle)
{
    
    int k = 0;   
    while ( k < haystack.size() )
    {
        int i = 0;
        int m = k;
        while (needle[i] == haystack[m] && i < needle.size())
            {
                i++;
                m++;
            }
            if (i == needle.size() && needle.size() != 0)
                return (k);
        k++;
    }
    return(-1);
}
class Solution {
public:
    int strStr(string haystack, string needle) {
        return(get_index(haystack, needle));
    }
};