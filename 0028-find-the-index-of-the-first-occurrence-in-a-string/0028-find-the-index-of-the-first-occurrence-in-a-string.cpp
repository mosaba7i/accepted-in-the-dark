//updated 2-> less lines
// idk what to say i just found out about string.find() :p
// but the imp of string.find has same comp as my last sub which is o(MxN)
class Solution {
public:
    int strStr(string haystack, string needle) {
        return(haystack.find(needle));
        
    }
};