class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int i = 0;
        int j = 0;
        int count  = 0;
        int size_met = ransomNote.size();
        while (i < ransomNote.size())
        {
            j = 0;
            while (j < magazine.size())
            {
                if (ransomNote[i] == magazine[j])
                {
                    count ++;
                    magazine.erase(magazine.begin()+ j);
                    break ;
                }
                else
                    j++;
            }
            i++;
        }
        if (count == size_met)
            return(true);
        return(false);
    }
};