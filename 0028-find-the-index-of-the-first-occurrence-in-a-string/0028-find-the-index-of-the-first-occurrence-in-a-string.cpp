
int get_index(string haystack, string needle)
{
    int i =0;
    int j =0;
    int k = 0;
    int l = 0;
    while (haystack[j])
        j++;
    while (needle[l])
        l++; 
    
    while ( k < j )
    {
        i = 0;
        int m = k;
        while (needle[i] == haystack[m] && i < l)
            {
                i++;
                m++;
            }
            if (i == l && l != 0)
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