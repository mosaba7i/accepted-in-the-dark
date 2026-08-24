class Solution {
public:
    string truncateSentence(string s, int k) {
         int count = 0;
         string out;
            for(int j = 0; j < s.size() && count != k ;j++)
            {
                while(s[j] != ' ' && j < s.size())
                {
                    out.push_back(s[j]);
                    j++;
                }
                count++;
                if(j<s.size() && count !=k)
                    out.push_back(s[j]);
            }
            return(out);
        }
    
};