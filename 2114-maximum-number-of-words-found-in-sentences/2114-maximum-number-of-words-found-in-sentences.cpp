class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max = 0;
        int count = 0;
        for(int i = 0;i  < sentences.size();i++)
        {
            count = 0;
            for(int j = 0; j < sentences[i].size();j++)
            {
                while(sentences[i][j] != ' ' && j < sentences[i].size())
                    j++;
                count++;
            }
            if (count > max)
                max = count;
        }
        return(max);
    }
};