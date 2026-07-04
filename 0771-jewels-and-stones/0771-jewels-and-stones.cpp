class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char>key;
        int count = 0;
        for(int i = 0;i < jewels.size();i++)
            key.insert(jewels[i]);
        for(int i = 0;i < stones.size();i++)
            if(key.count(stones[i]))
                count++;
        return(count);
    }
};