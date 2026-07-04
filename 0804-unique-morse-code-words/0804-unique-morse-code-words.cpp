class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = {
        ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---",
        "-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-",
        "..-","...-",".--","-..-","-.--","--.."
        };
        unordered_set <string> code;
        for (int i  = 0; i < words.size();i++)
        {
            string str;
            for(int j = 0; j < words[i].size();j++)
            {
                int index = (words[i][j] - 'a');
                str += morse[index];
            }
            code.insert(str);
        }
        return(code.size());
    }
};