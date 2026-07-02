class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       unordered_map<char,int> mag;
       for(int i = 0; i < magazine.size();i++)
       {
            if (mag.find(magazine[i]) != mag.end())
                mag[magazine[i]]++;
            else
                mag[magazine[i]] = 1;
       }
       for(int i = 0; i < ransomNote.size();i++)
       {
            if (mag.find(ransomNote[i]) != mag.end() && mag[ransomNote[i]] != 0)
                mag[ransomNote[i]]--;
            else
                return(false);
       }
        return(true);
    }
};