class Solution {
public:
    bool digitCount(string num) {
       unordered_map <int,int> key;
       unordered_map <int,int> key2;
       for(int i = 0;i<num.size();i++)
            if ((num[i] - '0') != 0)
                key[i] = (num[i] - '0');
        for(int i = 0;i<num.size();i++)
            key2[(num[i] - '0')]++;
        return(key2 == key);
    }
};