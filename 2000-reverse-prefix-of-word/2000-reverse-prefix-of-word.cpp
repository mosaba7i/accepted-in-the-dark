class Solution {
public:
    string reversePrefix(string word, char ch) {
        int pos = 0;
        for(int i = 0; i<word.size() && word[i] != ch;i++)
            pos++;
        if(pos < word.size())
            reverse(word.begin(),word.begin()+pos+1);
        return(word);
    }
};